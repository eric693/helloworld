from email.message import EmailMessage
import ssl
import smtplib
gmail_sender =  "exo881222@gmail.com"
gmail_password = "chevluwueiebhmkd"  # your gmail password
gmail_reciever = "kevinhu255@gmail.com"  #自己的gmail
subject = "1219物聯網實驗測試" #標題
body = "111523055_洪培瑜" #內文
 
msg = EmailMessage()
msg['From'] = gmail_sender
msg['To'] = gmail_reciever
msg['Subject']= subject
msg.set_content(body)
context = ssl.create_default_context()
with smtplib.SMTP_SSL('smtp.gmail.com',465,context=context) as smtp:
     smtp.login(gmail_sender , gmail_password )
     smtp.sendmail(gmail_sender, gmail_reciever, msg.as_string())
print ("Email sent!")

