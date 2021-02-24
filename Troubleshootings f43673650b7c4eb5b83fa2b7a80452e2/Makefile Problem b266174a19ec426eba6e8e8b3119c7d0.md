# Makefile Problem

- 어떤 문제로 인해 HLS 유래 dogain에 대한 빌드(preprocessing header include, compiling to obj file 둘 다), 클린이 작동하지 않음
- 그런데 dogain 헤더파일을 하드카피해서 default include 경로로 옮기면, include는 작동함
- 와일드카드? gcc?
- 3 files are identical to each.
- 

Makefile 파일 3개 정도를 수정해주니 잘 되네요. 구체적으로는, 랩6의 dogain을 vitis hls에서 작성했는데, 거기서 빌드해 생성된 dogain Makefile이 vitis platform에서 호환이 안되는 모양입니다(gcc 버전 변경으로 인한 와일드카드 문제, vitis 마이그레이션 문제 등이 복합적으로 있는 거 같습니다) 그래서 dogain 컴파일에 관여하는 makefile 파일 3개를 수정해주니 해결됐습니다. vitis project explorer기준으로 다음 3개입니다. 이들의 공통점은 vitis hls에서 제너레이트했다는 점이네요

- {$PLATFORM}/hw/drivers/doGain_v1_0/src/Makefile
- {$PLATFORM}/ps7_cortexa9_0/standalone_domain/bsp/ps7_cortexa9_0/libsrc/doGain_v1_0/src/Makefile
- {$PLATFORM}/zynq_fsbl/zynq_fsbl_bsp/ps7_cortexa9_0/libsrc/doGain_v1_0/src/Makefile
    - {$PLATFORM}/ps7_cortexa9_0/standalone_domain/bsp/ps7_cortexa9_0/Makefile

그냥 잘 만들어졌을 법한, vivado에서 기본 제공되는 ip의 Makefile을 통으로 긁어왔습니다. 저는 코어텍스의 Makefile을 긁어왔네요.

- {$PLATFORM}/ps7_cortexa9_0/standalone_domain/bsp/ps7_cortexa9_0/libsrc/cpu_cortexa9_v2_10/src/Makefile

    [Makefile.zip](Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0/Makefile.zip)

![Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0/Untitled.png](Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0/Untitled.png)

![Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0/Untitled%201.png](Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0/Untitled%201.png)

![Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0/Untitled%202.png](Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0/Untitled%202.png)

---

![Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0/Untitled%203.png](Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0/Untitled%203.png)

![Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0/Untitled%204.png](Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0/Untitled%204.png)