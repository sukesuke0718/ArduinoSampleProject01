///////////////////////////////////////
//  明るさ検知プログラム
//////////////////////////////////////

// グローバル変数の宣言
int CDS_SOCKET  = 0;

// 初期処理
void setup() {
  // シリアル接続の初期設定
  Serial.begin(9600);
}

// メイン処理
void loop() {
  // 変数の宣言
  int analog_val;        // アナログ入力の値を格納
  float input_volt;     //  電圧に変換した値を格納
  String  message = ""; // 表示するメッセージを格納

  //アナログ入力を行う
  analog_val  = analogRead(CDS_SOCKET);

  //電圧への変換
  input_volt  = float(analog_val) * (5.0 / 1023.0);

  // 電圧の大きさを判定
  if(input_volt > 1.0){
    message = "Lighted  : ";
  }else{
    message = "Dark  : ";
  }

  // メッセージの表示
  Serial.println(message  + input_volt  + "V");

  // 待機
  delay(500);
}
