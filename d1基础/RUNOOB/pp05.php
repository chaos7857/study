<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>����̳�(runoob.com) urllib POST  ����</title>
</head>
<body>
<form action="" method="post" name="myForm">
    Name: <input type="text" name="name"><br>
    Tag: <input type="text" name="tag"><br>
    <input type="submit" value="�ύ">
</form>
<hr>
<?php
// ʹ�� PHP ����ȡ���ύ�����ݣ�����Ի���������
if(isset($_POST['name']) && $_POST['tag'] ) {
   echo $_POST["name"] . ', ' . $_POST['tag'];
}
?>
</body>
</html>