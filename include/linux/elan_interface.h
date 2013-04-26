#ifndef __ELAN_STATUS__
#define __ELAN_STATUS__

#define ELAN_LS_2182 "elan-epl2182"
#define ELAN_LS_6801 "elan-epl6801"
#define ELAN_LS_6802 "elan-epl6802"
#define ELAN_LS_6803 "elan-epl6803"
#define ELAN_LS_6804 "elan-epl6804"
#define ELAN_LS_6814 "elan-epl6814"
#define ELAN_LS_6881 "elan-epl6881"
#define ELAN_LS_8852 "elan-epl8852"
#define ELAN_LS_8882 "elan-epl8882"
#define ELAN_LS_8892 "elan-epl8892"

#define ELAN_IOCTL_MAGIC 'c'
#define ELAN_EPL6801_IOCTL_GET_PFLAG _IOR(ELAN_IOCTL_MAGIC, 1, int *)
#define ELAN_EPL6801_IOCTL_GET_LFLAG _IOR(ELAN_IOCTL_MAGIC, 2, int *)
#define ELAN_EPL6801_IOCTL_ENABLE_PFLAG _IOW(ELAN_IOCTL_MAGIC, 3, int *)
#define ELAN_EPL6801_IOCTL_ENABLE_LFLAG _IOW(ELAN_IOCTL_MAGIC, 4, int *)
#define ELAN_EPL6801_IOCTL_GETDATA _IOR(ELAN_IOCTL_MAGIC, 5, int *)

#define ELAN_EPL6800_IOCTL_GET_PFLAG _IOR(ELAN_IOCTL_MAGIC, 1, int *)
#define ELAN_EPL6800_IOCTL_GET_LFLAG _IOR(ELAN_IOCTL_MAGIC, 2, int *)
#define ELAN_EPL6800_IOCTL_ENABLE_PFLAG _IOW(ELAN_IOCTL_MAGIC, 3, int *)
#define ELAN_EPL6800_IOCTL_ENABLE_LFLAG _IOW(ELAN_IOCTL_MAGIC, 4, int *)
#define ELAN_EPL6800_IOCTL_GETDATA _IOR(ELAN_IOCTL_MAGIC, 5, int *)

#define ELAN_EPL6800_IOCTL_GET_GFLAG _IOR(ELAN_IOCTL_MAGIC, 6, int *)
#define ELAN_EPL6800_IOCTL_ENABLE_GFLAG _IOW(ELAN_IOCTL_MAGIC, 7, int *)
#define ELAN_EPL6800_IOCTL_GETDATA_GES _IOR(ELAN_IOCTL_MAGIC, 8, int *)


#define LIGHTSENSOR_IOCTL_MAGIC 'l'

#define LIGHTSENSOR_IOCTL_GET_ENABLED _IOR(LIGHTSENSOR_IOCTL_MAGIC, 1, int *)
#define LIGHTSENSOR_IOCTL_ENABLE _IOW(LIGHTSENSOR_IOCTL_MAGIC, 2, int *)


#define CAPELLA_CM3602_IOCTL_MAGIC 'c'
#define CAPELLA_CM3602_IOCTL_GET_ENABLED \
		_IOR(CAPELLA_CM3602_IOCTL_MAGIC, 1, int *)
#define CAPELLA_CM3602_IOCTL_ENABLE \
		_IOW(CAPELLA_CM3602_IOCTL_MAGIC, 2, int *)

struct elan_epl_platform_data
{
	int intr_gpio;
	int (*power)(int on);
	
};

#endif