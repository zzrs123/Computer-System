


fn main(){

    // // * 带后缀的字面量
    // // let a = 1u8;
    // // let b = 2u32;
    // // let c = 3i64;
    // // * 下划线间隔值和类型
    // // let d = 4_f32;

    // //报错1
    // let b = 5_i32;
    // let c = *b;
    // // 至于为什么出错可以参见笔记2的Copy类型部分
    // // i32默认是trait，也就是copy而不是move
    // // 报错2、3：对Var、 Shape对象进行解引用会报错
    // struct Var { value:i32};
    // impl std::ops::Deref for Var {
    //     type Target = i32;
    //     fn deref(&self) -> &i32 {
    //         println!("->deref");
    //         &self.value
    //     }
    // }

    // struct Shape {
    // val: Var,
    // }
    // impl std::ops::Deref for Shape {
    //     type Target = Var;
    //     fn deref(&self) -> &Var {
    //         println!("deref shape is success!");
    //         &self.val
    //     }
    // }
    let data = "Rust is great!".to_string();
    println!("{}", data);
    let x = Some("air");
    println!("{}",x.unwrap());
}


