<div style=
"
    text-align:center;
    text-transform:uppercase;
    font-size: 24px;
"> 

# ***Building a Backend-as-a-Service (BaaS) system from scratch***
</div>

# ​​**1. ​What is Backend as a Service (BaaS)?**

*`BaaS`* là ​​một nền tảng đám mây cung cấp cơ sở hạ tầng và các dịch vụ `backend` được xây dựng sẵn. Nó giúp các nhà phát triển không còn phải lo việc quản lý máy chủ, cơ sở dữ liệu và các tác vụ `backend` khác.


<div align=center> 

![Tổng quan về BaaS](./images/baas_pic.webp)
</div>


# **2. Tại sao phải xây dựng hệ thống BaaS?**

Như đã nói ở trên, BaaS là dịch vụ giúp các nhà phát triển giảm bớt gắng nặng về hạ tầng cũng như thời gian phát triển ứng dụng của họ. Tuy nhiên, những tiện lợi mà BaaS đã cung cấp lại là một sự phụ thuộc không hề nhẹ với bên nhà cung cấp. Vì thế cần xây dựng một hệ thống BaaS nhẹ, tối ưu, không phụ thuộc bên thứ 3 (tránh dependency hell, lỗ hổng bảo mật từ thư viện ngoài), duy trì sự kiểm soát 100% đối với mã nguồn.

# **3. Hệ thống BaaS sẽ có những yêu cầu gì?**

## 3.1 Chức năng (function):