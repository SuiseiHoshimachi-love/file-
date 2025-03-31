# file-
doc file don gian
1️⃣ Đọc dữ liệu từ file
Mở file "test.txt" để đọc dữ liệu đầu vào.

Đọc kích thước ma trận hang × cot.

Cấp phát động mảng 2D A để lưu ma trận.

Duyệt từng phần tử và lưu vào A.

2️⃣ Tìm số lớn nhất và số lớn nhì trong ma trận
Khởi tạo lon_nhat và lon_nhi bằng phần tử đầu tiên.

Duyệt từng phần tử trong ma trận:

Nếu phần tử lớn hơn lon_nhat, cập nhật lon_nhi = lon_nhat, rồi cập nhật lon_nhat.

Nếu phần tử lớn hơn lon_nhi nhưng khác lon_nhat, cập nhật lon_nhi.

3️⃣ Tính tổng các cột
Cấp phát mảng tong_cot để lưu tổng của mỗi cột.

Duyệt qua từng cột:

Cộng dồn tất cả phần tử trong cột đó.

4️⃣ Tạo mảng C từ A theo quy tắc
Duyệt từng hàng để tìm số nhỏ nhất nho_nhat trong hàng.

Tạo mảng C, trong đó:

C[i][j] = A[i][j] * nho_nhat (nhân từng phần tử với số nhỏ nhất của hàng).

5️⃣ Ghi kết quả ra file
Ghi số lớn nhất (lon_nhat) và số lớn nhì (lon_nhi).

Ghi tổng từng cột (tong_cot).

Ghi ma trận C ra file "output.txt".

6️⃣ Giải phóng bộ nhớ
Xóa mảng A, C, tong_cot để tránh rò rỉ bộ nhớ.
