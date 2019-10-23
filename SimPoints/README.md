## SimPoints

This folder holds the results of SimPoint study.
Pinballs for SimPoints are available for download [here](https://github.com/UT-LCA/Scalability-Phase-Simpoint-of-SPEC-CPU2017/releases).

## Usage

Pinballs can be run natively using the Software Develop Emulator from Intel (https://software.intel.com/en-us/articles/intel-software-development-emulator). Gem5 (http://gem5.org/Simpoints) and Sniper (http://snipersim.org/w/Pinballs) also support the replaying of pinballs.

Interpreting the meaning of the 10 to 30 Pinballs for each workload in SPEC CPU 2017 is fairly straightforward. Each pinball base name specifies the key details for the pinball. An example is included below:
deepsjeng.test_38307_t0r1_warmup1501_prolog0_region100000038_epilog0_001_0-05045.0.address

The file has many parts to its name, each with a specific meaning.

"program name"."run name"_"run number"_t"thread number"r"region number"_warmup"num warm up instructions"_prolog"num prolog instructions"_region"num instructions in region of interest"_epilog"num epilog instructions"_"region number again"_"thread number again"-"weight of the region".0."file type"

Of particular importance is the "weight of the region" part of the file name. This specifies how to scale the performance values of the pinball when combining the results of multiple pinballs. These weights are for the most part summarized in table II of Hot Regions in SPEC CPU 2017. However, the paper does contain typos for two workloads. Namely, Perlbench and Omnetpp have data from different runs than are included in this repository. In addition, results for Xalancbmk were not available during the paper's publication. In all cases, please refer to the file names to confirm the weights and instruction counts of the pinballs.

- **Note:** Please refer to the [SPEC Fair Use Rules](http://www.spec.org/fairuse.html) before using these checkpoints. If used as the basis for prediction of SPEC run time or a SPEC metric, any results published must be very clearly tagged as “Estimated” or “Estimated by simulation of pinballs for representative simulation regions (PinPoints)”.
- **Note:** The "Source code (zip)" and the "Source code (tar.gz)" are packages of the repository, only have documentation. For a copy of SPEC CPU2017, please see [http://www.spec.org](http://www.spec.org/).

