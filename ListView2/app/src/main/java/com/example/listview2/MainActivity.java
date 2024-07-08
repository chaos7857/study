package com.example.listview2;

import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    private ListView listView;
    private ArrayList<Msg> msgs;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        initUI();
        initData();
//        MsgAdapter msgAdapter = new MsgAdapter(this.getApplicationContext(),msgs);
//        listView.setAdapter(msgAdapter);

        MsgAdapter2 msgAdapter2 = new MsgAdapter2(this.getApplicationContext(), R.layout.list_item,R.layout.list_item,msgs);
        listView.setAdapter(msgAdapter2);
    }

    private void initData() {
        msgs = new ArrayList<>();
        Msg msg1 = new Msg("hello1",1);
        Msg msg2 = new Msg("hello0", 0);
        msgs.add(msg1);
        msgs.add(msg2);
    }

    private void initUI() {
        listView = findViewById(R.id.list_view);
    }
}