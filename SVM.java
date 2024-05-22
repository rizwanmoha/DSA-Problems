import java.util.ArrayList;

public class SVM {

    public static void main(String[] args) {
        
        double[][] S1 = {{4, 1}, {4, -2}, {5, -2}, {6, 3}};
       
        double[][] S2 = {{1, 2}, {2, -1}, {1, -2}, {-1, 1}};

       ArrayList<Double> doubleList = new ArrayList<>();

       for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            double temp =  calculateEuclideanDistance(S1[i][0] , S1[i][1] , S2[i][0] , S2[i][1]);
            doubleList.add(temp);
        }
       }

        double[][] data = new double[S1.length + S2.length][];
        System.arraycopy(S1, 0, data, 0, S1.length);
        System.arraycopy(S2, 0, data, S1.length, S2.length);
        arranging_the_distance(doubleList);
       
        double[] labels = {1, 1, 1, 1, -1, -1, -1, -1};

       
        double[] result = findSVMParameters(data, labels);

      
        System.out.println("Weight Vector: [" + (int)result[0] + ", " + (int)result[1] + "]");
        System.out.println("Bias: " + (int)result[2]);
    }

    private static double[] findSVMParameters(double[][] data, double[] labels) {
        int numSamples = data.length;
        int numFeatures = data[0].length;

        
        double[] weights = new double[numFeatures];
        double bias = 0.0;

       
        double learningRate = 0.01;
        double regularization = 0.5;

        
        for (int epoch = 0; epoch < 1000; epoch++) {
            for (int i = 0; i < numSamples; i++) {
                double[] sample = data[i];
                double label = labels[i];

                double prediction = dotProduct(weights, sample) + bias;
                double hingeLoss = Math.max(0, 1 - label * prediction);

              
                if (hingeLoss > 0) {
                    for (int j = 0; j < numFeatures; j++) {
                        weights[j] += learningRate * (label * sample[j] - regularization * weights[j]);
                    }
                    bias += learningRate * label;
                }
            }
        }

        return new double[]{weights[0], weights[1], bias};
    }

    private static double dotProduct(double[] a, double[] b) {
        double result = 0.0;
        for (int i = 0; i < a.length; i++) {
            result += a[i] * b[i];
        }
        return result;
    }

    private static void arranging_the_distance(ArrayList<Double> list) {
        int n = list.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                // Swap if the element found is greater than the next element
                if (list.get(j) > list.get(j + 1)) {
                    double temp = list.get(j);
                    list.set(j, list.get(j + 1));
                    list.set(j + 1, temp);
                }
            }
        }
    }



    private static double calculateEuclideanDistance(double x1, double y1, double x2, double y2) {
        // Calculate the Euclidean distance using the formula
        double deltaX = x2 - x1;
        double deltaY = y2 - y1;

        return Math.sqrt(deltaX * deltaX + deltaY * deltaY);
    }
}
