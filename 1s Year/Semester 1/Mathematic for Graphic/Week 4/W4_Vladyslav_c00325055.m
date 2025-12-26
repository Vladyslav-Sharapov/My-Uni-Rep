a = [2, -1, 3];
b = [4, 0, -2];

acb = [a(2) * b(3) - a(3) * b(2), a(3) * b(1) - a(1) * b(3), a(1) * b(2) - a(2) * b(1)];

acb_mat = cross(a,b);

acb_d = dot(a,b);
%fprintf('the outcome is =%d' ,acb_d);

%fprintf('the outcome is not orthogonal if the number is not 0');

origin = 0;

acb_projection = (dot(a,b) / ((norm(b)^2))*b);

quiver3(0,0,0, a(1), a(2), a(3));
hold on
quiver3(0,0,0, b(1), b(2), b(3));
hold on
quiver3(0,0,0, acb_projection(1), acb_projection(2), acb_projection(3));
hold on

%for some reason fprintf does not working