x = (-10:0.2:10);
y1 = x.^2;
y2 = x.^3;
y3 = 2 * y1./ y2;
figure;
plot(y1, 'b-o');
hold on;

plot(y2, 'r--');
hold on;

plot(y3, 'k:', 'LineWidth', 2)
hold on;