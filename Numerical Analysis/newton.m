clc
clear all

% Ingredients (You can also input them)
f_str = input('Enter your function : ', 's');
f = str2sym(f_str);  % Convert input string to a symbolic expression
syms x;
df = diff(f, x);
x0 = 1.5;
e = 10^-4;
n = 10;

% Processing
df_value = double(subs(df, x, x0));
if (df_value ~= 0)
    for i = 1:n
        x1 = x0 - double(subs(f, x, x0)) / df_value;
        x0 = x1;
    end
else
    disp("Newton raphson failed")
end

disp(['Approximate root: ', num2str(x0)]);
