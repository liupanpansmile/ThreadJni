package oneapm.synthetic.agent.runner.jni;

public class ThreadJni {
	
	/*
	 * ͨ��JNI�����̣߳�Ȼ���߳�launch�������,�������̵߳ģɣ�
	 * */
	public native long CreateThread(String applicationName,String cmdLine) ;
	
	static 
	{
		System.loadLibrary("ThreadJni");
	}
	public static void main (String[] args)
	{
		String applicationName = "D:/work/firefox-agent/ffAgent001/ffAgent001/38.0.5/firefox.exe" ;
		String cmdLine = "-no-remote -profile D:/work/firefox-agent/ffAgent001/ffAgent001/38.0.5/oenapm_1 -tsport 8800 about:blank " ;
		ThreadJni obj = new ThreadJni() ;
		long processId = obj.CreateThread(applicationName,cmdLine);
		
		System.out.println("ProcessId = " + processId);
	}
}
