package com.example.test1;

import android.app.appsearch.GetByDocumentIdRequest;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;

public class ShowInfo extends AppCompatActivity implements View.OnClickListener {

    private ImageView img_info;
    private TextView tv_info;
    private Button btn_info;

    public int[] img = {R.drawable.img_0,R.drawable.img_1,R.drawable.img_2,R.drawable.img_3,R.drawable.img_4,R.drawable.img_5};
    Handler handler = new Handler(new Handler.Callback() {
        @Override
        public boolean handleMessage(@NonNull Message msg) {
            if (msg.what == 101) {
                String data = msg.getData().getString("data");
                if (data != null) {
                    tv_info.setText(data);
                }
                return true;
            }else {
                return false;
            }
        }
    });
    private int i=0;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.show_info);

        initView();
        initData();
    }

    private void initView() {
        img_info = findViewById(R.id.img_info);
        tv_info = findViewById(R.id.tv_info);
        btn_info = findViewById(R.id.btn_info);
        btn_info.setOnClickListener(this);
    }

    @Override
    public void onClick(View v) {
        initData();

        ++i;
        i = i%img.length;
        Log.e("showindex", i+"");
        img_info.setImageResource(img[i]);
    }

    private void initData() {
//        安卓调用网络一定得开子线程
        new Thread(new Runnable() {
            @Override
            public void run() {
                String data = getDataFromWeb();

                Message message = Message.obtain();
                Bundle bundle = new Bundle();
                bundle.putString("data",data);
                message.setData(bundle);
                message.what = 101;

                handler.sendMessage(message);
            }
            //        从服务器获取
            private String getDataFromWeb() {
                try {
                    URL url = new URL("https://v1.hitokoto.cn/?c=f&encode=text");
                    HttpURLConnection urlConnection = (HttpURLConnection) url.openConnection();
                    if (urlConnection.getResponseCode() == 200) {
                        InputStream inputStream = urlConnection.getInputStream();
                        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream));
                        StringBuilder stringBuilder = new StringBuilder();
                        for(String line = "";(line = bufferedReader.readLine())!=null;){
                            stringBuilder.append(line);
                        }

                        bufferedReader.close();
                        inputStream.close();
                        urlConnection.disconnect();

                        return stringBuilder.toString();
                    }

                } catch (IOException e) {
//                    throw new RuntimeException(e);
                    Log.e("err", e.toString());
                }
                return null;
            }
        }).start();
    }
}
