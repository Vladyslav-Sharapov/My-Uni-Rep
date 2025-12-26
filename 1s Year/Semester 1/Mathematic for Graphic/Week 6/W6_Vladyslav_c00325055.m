%% Task1
x = [-15:0.1:15];
y1 = 3 * x + 5;
y2 = 4 - x;
m1 = 3; c1 = 5;
m2 = -1 ; c2 = 4;

if m1 == m2
    fprintf('Lines are parallel (no single interaction)')
    return
end

%Intersecction
x_int = (c2 - c1) / (m1 - m2); 
y_int = m1*x_int + c1;

fprintf('Intersection: (%.2f, %.2f)\n', x_int, y_int);

%Drawing
figure;
plot(x, y1, 'r', 'LineWidth', 2); hold on;
plot(x, y2, 'b', 'LineWidth', 2);
plot(x_int, y_int, 'ko', 'MarkerFaceColor', 'g', 'MarkerSize', 8);

ax = gca;
ax.XAxisLocation = 'origin';
ax.YAxisLocation = 'origin';

xlabel('x'); ylabel('y'); grid on;
legend('y1 = 3x + 5', 'y2 = 4 - x', 'Intersection', 'Location', 'best');
title('Task 1')

%% Task 2

A = [3, 2; 5, 4];
B = [1, 6; 2, 3];

C = A + B;