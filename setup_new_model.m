% /%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% @file     setup_new_model
% @author   Marcell Mocher
% @version  V0.0.1
% @date     16.6.2016
% @brief    Run this script once if a new simulink model for hardware deployment is
%           made
%
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% @attention
%
%
%
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%/

%% enter simulink model name
%set_param('simulink_model_name','CustomSource', fullfile('arduino_wrapper.cpp') );

%% only works if simulink model is open
simulink_model_name = gcs;
set_param(simulink_model_name,'CustomSource', fullfile('arduino_wrapper.cpp') );