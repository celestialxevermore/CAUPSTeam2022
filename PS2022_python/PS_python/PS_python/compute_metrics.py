import numpy as np 

def compute_metrics(x):
    sx = np.argsort(-x,axis=1)
    print(sx)
    d = np.array(range(0,x.shape[0]))
    ind = sx - d[:,np.newaxis]
    ind = np.wher(ind ==0)[1]

    metrics = {}
    metrics['R1'] = float(np.sum(ind == 0)) * 100 / len(ind)
    metrics['R5'] = float(np.sum(ind < 5)) * 100 / len(ind)
    metrics['R10'] = float(np.sum(ind < 10)) * 100 / len(ind)
    metrics['MR'] = np.median(ind) + 1
    metrics["MedianR"] = metrics['MR']
    metrics["MeanR"] = np.mean(ind) + 1
    metrics["cols"] = [int(i) for i in list(ind)]

    return metrics 

test1 = np.array([[ 2, 1,-100,-100,-100,-100,-100,-100,-100,-100,],
[-100, 2, 1,-100,-100,-100,-100,-100,-100,-100,],
[-100,-100, 2, 1-100,-100,-100,-100,-100,-100,],
[-100,-100,-100, 2, 1,-100,-100,-100,-100,-100,],
[-100,-100,-100,-100, 2, 1,-100,-100,-100,-100,],
[-100,-100,-100,-100,-100, 2, 1,-100,-100,-100,],
[-100,-100,-100,-100,-100,-100, 2, 1,-100,-100,],
[-100,-100,-100,-100,-100,-100,-100, 2, 1,-100,],
[-100,-100,-100,-100,-100,-100,-100,-100, 2, 1,],
[ 2, 1,-100,-100,-100,-100,-100,-100,-100,-100,],])

test1res = compute_metrics(test1)

print(metrics)