import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class myFrame extends JFrame implements ActionListener {
    Container c;
    Font fn = new Font("Arial", Font.BOLD, 20);
    Font fn2 = new Font("Arial", Font.ITALIC, 20);
    JLabel lableBDT = new JLabel("BDT");
    JTextField textBDT = new JTextField();
    JLabel lableUSD = new JLabel("USD");
    JTextField textUSD = new JTextField();
    JButton btnBDTtoUSD = new JButton("BDTtoUSD");
    JButton btnUSDtoBDT = new JButton("USDtoBDT");
    JButton btnRefresh = new JButton("Refresh");
    JLabel lableDisplay = new JLabel("");

    public myFrame() {
        c = this.getContentPane();
        c.setLayout(null);
        c.setBackground(Color.DARK_GRAY);
        lableBDT.setBounds(130, 150, 70, 35);
        lableBDT.setFont(fn);
        lableBDT.setForeground(Color.WHITE);
        textBDT.setBounds(190, 150, 270, 35);
        textBDT.setFont(fn2);
        lableUSD.setBounds(130, 200, 95, 35);
        lableUSD.setFont(fn);
        lableUSD.setForeground(Color.WHITE);
        textUSD.setBounds(190, 200, 270, 35);
        textUSD.setFont(fn2);
        btnBDTtoUSD.setBounds(90, 250, 140, 35);
        btnBDTtoUSD.setFont(fn);
        btnBDTtoUSD.setForeground(Color.BLUE);
        btnUSDtoBDT.setBounds(240, 250, 140, 35);
        btnUSDtoBDT.setFont(fn);
        btnUSDtoBDT.setForeground(Color.RED);
        btnRefresh.setBounds(390, 250, 110, 35);
        btnRefresh.setFont(fn2);
        lableDisplay.setBounds(200, 320, 300, 35);
        lableDisplay.setFont(fn2);
        lableDisplay.setForeground(Color.WHITE);
        c.add(lableBDT);
        c.add(textBDT);
        c.add(lableUSD);
        c.add(textUSD);
        c.add(btnBDTtoUSD);
        c.add(btnUSDtoBDT);
        c.add(btnRefresh);
        c.add(lableDisplay);
        btnBDTtoUSD.addActionListener(this);
        btnUSDtoBDT.addActionListener(this);
        btnRefresh.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == btnRefresh) {
            textBDT.setText("");
            textUSD.setText("");
            lableDisplay.setText("Enter Units to Convert!");
        }

        if (e.getSource() == btnBDTtoUSD) {
            String inputBDT = textBDT.getText();
            if (!inputBDT.equals("")) {

                try {
                    float floatValue = Float.parseFloat(inputBDT);
                    textUSD.setText(Float.toString(floatValue / 110));
                    lableDisplay.setText("");
                } catch (NumberFormatException exp) {
                    lableDisplay.setText("Invalid number format");
                }
            } else {
                lableDisplay.setText("Please Enter BDT Unit!");
            }
        }

        if (e.getSource() == btnUSDtoBDT) {
            String inputUSD = textUSD.getText();
            if (!inputUSD.equals("")) {

                try {
                    float floatValue = Float.parseFloat(inputUSD);
                    textBDT.setText(Float.toString(floatValue * 110));
                    lableDisplay.setText("");
                } catch (NumberFormatException exp) {
                    lableDisplay.setText("Invalid number format");
                }
            } else {
                lableDisplay.setText("Please Enter USD Unit!");
            }
        }
    }
}

class CSE4 {
    public static void main(String[] args) {
        myFrame frame = new myFrame();
        frame.setTitle("Currency Converter");
        frame.setBounds(200, 200, 600, 550);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}