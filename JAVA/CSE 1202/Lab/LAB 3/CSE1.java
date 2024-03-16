import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class myFrame extends JFrame implements ActionListener {
    Container c;
    Font fn = new Font("Arial", Font.BOLD, 20);
    JTextField text = new JTextField();
    JButton btn = new JButton("Display");

    public myFrame() {
        c = this.getContentPane();
        c.setLayout(null);
        c.setBackground(Color.DARK_GRAY);
        text.setBounds(170, 200, 270, 35);
        text.setFont(fn);
        btn.setBounds(240, 250, 120, 35);
        btn.setFont(fn);
        btn.setForeground(Color.RED);
        c.add(text);
        c.add(btn);
        btn.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == btn) {
            text.setText("Sadman Sakib");
        }
    }
}

class CSE2 {
    public static void main(String[] args) {
        myFrame frame = new myFrame();
        frame.setTitle("Name Display");
        frame.setBounds(300, 200, 600, 550);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}