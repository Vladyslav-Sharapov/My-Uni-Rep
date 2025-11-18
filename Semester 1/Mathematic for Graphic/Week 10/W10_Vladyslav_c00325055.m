% Task 1
A = [2, 1];
B = [8, 1];
C = [8, 5];
D = [2, 5];

x = [A(1), B(1), C(1), D(1), A(1)];
y = [A(2), B(2), C(2), D(2), A(1)];

figure;
hold on;
grid on;
axis equal;
xlabel('X'); 
ylabel('Y');

plot(x, y, 'g-', 'LineWidth', 2);

text(A(1), A(2), 'A', 'FontSize', 15);
text(B(1), B(2), 'B', 'FontSize', 15);
text(C(1), C(2), 'C', 'FontSize', 15);
text(D(1), D(2), 'D', 'FontSize', 15);