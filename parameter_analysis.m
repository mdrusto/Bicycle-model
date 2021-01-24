function parameter_analysis(param, vals, titlestring, x_label)

n_vals = length(vals);
control = zeros(n_vals, 1);
stability = zeros(n_vals, 1);

model_name = 'Bicycle_model_constrained';
inputs = Simulink.SimulationInput(model_name);
model_workspace = get_param(model_name, 'ModelWorkspace');

% Remember the original value of the parameter
original_val = getVariable(model_workspace, param);

for i = 1:length(vals)
    % Change the parameter of interest
    %inputs = inputs.setModelParameter([model_name '/' param], vals(i));
    assignin(model_workspace, param, vals(i));
    
    % DELTA = 0, BETA = 0
    % Change the delta and beta inputs in the model
    inputs = inputs.setBlockParameter(strcat(model_name, '/Steering angle, deg'), 'Value', num2str(0));
    inputs = inputs.setBlockParameter(strcat(model_name, '/Chassis slip angle, deg'), 'Value', num2str(0));
    outputs = sim(inputs); % Run the simulation
    original_yaw_moment = outputs.logsout{2}.Values.Data(1); % Record the outputs
    
    % DELTA = 0.01, BETA = 0
    % Change the delta input in the model
    inputs = inputs.setBlockParameter(strcat(model_name, '/Steering angle, deg'), 'Value', num2str(0.01));
    outputs = sim(inputs); % Run the simulation
    control_yaw_moment = outputs.logsout{2}.Values.Data(1); % Record the outputs
    
    % DELTA = 0, BETA = 0.01
    % Reset the delta input and change the beta input in the model
    inputs = inputs.setBlockParameter(strcat(model_name, '/Steering angle, deg'), 'Value', num2str(0));
    inputs = inputs.setBlockParameter(strcat(model_name, '/Chassis slip angle, deg'), 'Value', num2str(0.01));
    outputs = sim(inputs); % Run the simulation
    stability_yaw_moment = outputs.logsout{2}.Values.Data(1); % Record the outputs

    control(i) = (control_yaw_moment - original_yaw_moment) / 0.01;
    stability(i) = (stability_yaw_moment - original_yaw_moment) / 0.01;
end

figure
yyaxis left
plot(vals, control)
ylabel('Control (Nm/deg)')
ylim([0 inf])

yyaxis right
plot(vals, stability)
ylabel('Stability (Nm/deg)')
title(['Control and stability with changes in ' titlestring])
xlabel(x_label)
ylim([-inf 0])

% Reset the model workspace variable
assignin(model_workspace, param, original_val);

end
