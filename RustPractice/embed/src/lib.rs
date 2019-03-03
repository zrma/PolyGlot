use std::thread;

#[cfg(test)]
mod tests {
    #[test]
    fn it_works() {
        assert_eq!(2 + 2, 4);
    }
}

#[no_mangle]
pub extern "C" fn process() {
    let handles: Vec<_> = (0..10)
        .map(|_| {
            thread::spawn(|| {
                let mut x = 0;
                for _ in 0..5_000_000 {
                    x += 1
                }
                x
            })
        })
        .collect();

    for h in handles {
        println!(
            "Thread finished with count={}",
            h.join().map_err(|_| "Could not join a thread!").unwrap()
        );
    }
}
