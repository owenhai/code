```mermaid
    title Quy trình Khám chữa bệnh tại Phòng khám
    
    |Bệnh nhân|
        start
        :Đến phòng khám;
    
    |Lễ tân|
        :Tiếp nhận;
        if (Bệnh nhân mới?) then (Có)
            :Tạo hồ sơ bệnh nhân;
        else (Không)
            :Tra cứu hồ sơ;
        endif
        :Tạo phiếu khám;
        :Chuyển vào hàng chờ;
    
    |Bác sĩ|
        :Gọi bệnh nhân;
        :Thực hiện khám lâm sàng;
        :Ghi nhận triệu chứng;
        if (Cần cận lâm sàng?) then (Có)
            :Chỉ định dịch vụ (XN, CĐHA);
    |Bệnh nhân|
        :Di chuyển đến phòng CLS;
    |Kỹ thuật viên|
        :Thực hiện CLS;
        :Cập nhật kết quả lên hệ thống;
    |Bác sĩ|
        :Nhận và đọc kết quả;
        endif
        :Đưa ra chẩn đoán;
        if (Cần kê đơn?) then (Có)
            :Kê đơn thuốc điện tử;
        endif
        :Hoàn tất khám;
    
    |Bệnh nhân|
        :Đến quầy thu ngân;
    
    |Thu ngân|
        :Lập hóa đơn (tự động lấy phí khám, CLS, thuốc);
        :Thu phí;
        :In biên lai;
    
    |Bệnh nhân|
        if (Có đơn thuốc?) then (Có)
            :Đến quầy dược;
    |Dược sĩ|
        :Nhận đơn thuốc (từ hệ thống);
        :Soạn thuốc và cấp phát;
        :Hướng dẫn sử dụng;
    |Bệnh nhân|
            :Nhận thuốc;
        endif
        :Rời phòng khám;
        stop


```
