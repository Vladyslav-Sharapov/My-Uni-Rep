%Task 1
function points2D (p1, p2)
%Operations
x1 = p1(1);
x2 = p2(1);
y1 = p1(2);
y2 = p2(2);

%calcualtion
d = sqrt((x1 - x2)^2 + (y1 - y2)^2);

%Display result
disp('d = sqr((x2 - x1)^2 + (y2 - y1)^2 =='); disp(d);
end