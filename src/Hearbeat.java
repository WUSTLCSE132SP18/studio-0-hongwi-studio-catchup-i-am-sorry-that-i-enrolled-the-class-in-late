
public class Hearbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int time = 0;
		while (time < 10) {
			try {
				Thread.sleep(1000);
				time += 1;
				System.out.println(time + " sec has passed. ");
			} catch (Exception e) {
				e.printStackTrace();
			
			}
		}
	}
}
