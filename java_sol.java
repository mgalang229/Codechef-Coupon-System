import java.io.*;
import java.util.*;

public class Main {
	static final Reader in = new Reader();
	static final PrintWriter out = new PrintWriter(System.out);

	public static void main(String[] args) {
		int t=in.nextInt();
		for(int i=1; i<=t; ++i)
			new Solver();
		out.close();
	}
	
	static class Solver {
		Solver() {
			int n=in.nextInt();
			Pair p[] = new Pair[3];
			for(int i=0; i<3; ++i)
				p[i] = new Pair(0, 0);
			Boolean vis[] = new Boolean[3];
			Arrays.fill(vis, false);
			for(int i=0; i<n; ++i) {
				int c=in.nextInt(), l=in.nextInt(), x=in.nextInt();
				--l;
				if(!vis[l]) {
					p[l] = new Pair(c, x);
					vis[l]=true;
				} else {
					if(x>p[l].second)
						p[l] = new Pair(c, x);
					else if(x==p[l].second&&c<p[l].first)
						p[l].first=c;
				}
			}
			for(int i=0; i<3; ++i)
				out.println(p[i].second+" "+p[i].first);
		}
	}
	
	static class Pair {
		int first, second;
		Pair(int first, int second) {
			this.first=first;
			this.second=second;
		}
	}
	
	static class Reader {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		String next() {
			while(st==null||!st.hasMoreTokens()) {
				try {
					st=new StringTokenizer(in.readLine());
				} catch(Exception e) {}
			}	
			return st.nextToken();
		}
		int nextInt() {
			return Integer.parseInt(next());
		}
		long nextLong() {
			return Long.parseLong(next());
		}
	}

}
