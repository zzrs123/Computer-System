/*
--  function：猜数字游戏  --
--  author： zzrs123    --
 */
use std::io;
use rand::Rng;
use std::cmp::Ordering;
fn main() {
    println!("Guess the number!");
    // rand库生成一个随机数  并打印
    let secret_number: u32 = rand::thread_rng().gen_range(1..=100);//从1到100.没有等号就是99
    println!("The secret number is: {secret_number}");

    loop{
        println!("Please input your guess.");
        // 定义 <可变> 的变量，创建字符串
        let mut guess = String::new();

        io::stdin()
            // 读取输入
            .read_line(&mut guess)
            // 与外界交互的程序，Rust要求必须进行显式的错误处理
            .expect("Failed to read line");
    
       
        let guess: u32 =match guess.trim().parse(){
            Ok(num) => num,
            Err(_) => continue,
        };
        // {} 类似于python的.format，C系的"%d",这里似乎高级一点，不需要在引号外面写变量
        println!("You guessed: {guess}");
        match guess.cmp(&secret_number){
            Ordering::Less=>println!("Small"),
            Ordering::Greater=>println!("Big"),
            Ordering::Equal=>{
                println!(r#"You win!!!"#);
                break;  
            }
        }
    }
    


}
