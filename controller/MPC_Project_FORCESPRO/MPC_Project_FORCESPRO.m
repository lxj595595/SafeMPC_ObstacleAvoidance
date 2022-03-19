% MPC_Project_FORCESPRO - a fast solver generated by FORCESPRO v5.1.0
%
%   OUTPUT = MPC_Project_FORCESPRO(PARAMS) solves a multistage problem
%   subject to the parameters supplied in the following struct:
%       PARAMS.xinit - column vector of length 6
%       PARAMS.linear_model1 - matrix of size [6 x 10]
%       PARAMS.linear_model2 - matrix of size [6 x 10]
%       PARAMS.linear_model3 - matrix of size [6 x 10]
%       PARAMS.linear_model4 - matrix of size [6 x 10]
%       PARAMS.linear_model5 - matrix of size [6 x 10]
%       PARAMS.linear_model6 - matrix of size [6 x 10]
%       PARAMS.linear_model7 - matrix of size [6 x 10]
%       PARAMS.linear_model8 - matrix of size [6 x 10]
%       PARAMS.linear_model9 - matrix of size [6 x 10]
%       PARAMS.hyperplaneA1 - matrix of size [1 x 10]
%       PARAMS.hyperplaneA2 - matrix of size [1 x 10]
%       PARAMS.hyperplaneA3 - matrix of size [1 x 10]
%       PARAMS.hyperplaneA4 - matrix of size [1 x 10]
%       PARAMS.hyperplaneA5 - matrix of size [1 x 10]
%       PARAMS.hyperplaneA6 - matrix of size [1 x 10]
%       PARAMS.hyperplaneA7 - matrix of size [1 x 10]
%       PARAMS.hyperplaneA8 - matrix of size [1 x 10]
%       PARAMS.hyperplaneA9 - matrix of size [1 x 10]
%       PARAMS.hyperplaneA10 - matrix of size [1 x 10]
%       PARAMS.hyperplaneb1 - column vector of length 1
%       PARAMS.hyperplaneb2 - column vector of length 1
%       PARAMS.hyperplaneb3 - column vector of length 1
%       PARAMS.hyperplaneb4 - column vector of length 1
%       PARAMS.hyperplaneb5 - column vector of length 1
%       PARAMS.hyperplaneb6 - column vector of length 1
%       PARAMS.hyperplaneb7 - column vector of length 1
%       PARAMS.hyperplaneb8 - column vector of length 1
%       PARAMS.hyperplaneb9 - column vector of length 1
%       PARAMS.hyperplaneb10 - column vector of length 1
%
%   OUTPUT returns the values of the last iteration of the solver where
%       OUTPUT.output - column vector of size 100
%
%   [OUTPUT, EXITFLAG] = MPC_Project_FORCESPRO(PARAMS) returns additionally
%   the integer EXITFLAG indicating the state of the solution with 
%       1 - OPTIMAL solution has been found (subject to desired accuracy)
%       0 - Timeout - maximum number of iterations reached
%      -7 - Method could not progress. Problem may be infeasible. Run FORCESdiagnostics on your problem to check for most common errors in the formulation.
%    -100 - License error
%
%   [OUTPUT, EXITFLAG, INFO] = MPC_Project_FORCESPRO(PARAMS) returns 
%   additional information about the last iterate:
%       INFO.it        - number of iterations that lead to this result
%       INFO.res_eq    - max. equality constraint residual
%       INFO.res_ineq  - max. inequality constraint residual
%       INFO.pobj      - primal objective
%       INFO.dobj      - dual objective
%       INFO.dgap      - duality gap := pobj - dobj
%       INFO.rdgap     - relative duality gap := |dgap / pobj|
%       INFO.mu        - duality measure
%       INFO.sigma     - centering parameter
%       INFO.lsit_aff  - iterations of affine line search
%       INFO.lsit_cc   - iterations of line search (combined direction)
%       INFO.step_aff  - step size (affine direction)
%       INFO.step_cc   - step size (centering direction)
%       INFO.solvetime - Time needed for solve (wall clock time)
%
% See also COPYING
