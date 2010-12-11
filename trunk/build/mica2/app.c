#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
# 121 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 257
static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 257
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;






static __inline int16_t __nesc_ntoh_int16(const void * source)  ;
#line 288
static __inline int16_t __nesc_hton_int16(void * target, int16_t value)  ;





static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 385
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 112 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x402a5978, const void *arg_0x402a5b10, size_t arg_0x402a5ca8);



extern void *memset(void *arg_0x402a7c70, int arg_0x402a7dc8, size_t arg_0x402ac010);
# 71 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x402b95a0, const void *arg_0x402b9738);
# 23 "/opt/tinyos-2.1.1/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 40 "/opt/tinyos-2.1.1/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 57 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 52
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 210 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;









typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 34 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4260 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4261 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4262 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4263 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4264 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4265 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4266 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4267 {

  uint8_t flat;
  struct __nesc_unnamed4268 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4269 {

  uint8_t flat;
  struct __nesc_unnamed4270 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4271 {

  uint8_t flat;
  struct __nesc_unnamed4272 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4277 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4280 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4289 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4290 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4291 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4292 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4293 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4294 {
  PLATFORM_MHZ = 8
};
# 56 "/opt/tinyos-2.1.1/tos/platforms/mica2/hardware.h"
enum __nesc_unnamed4295 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4296 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7
};

enum __nesc_unnamed4297 {
  PLATFORM_BAUDRATE = 57600L
};
# 54 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Const.h"
enum __nesc_unnamed4298 {
  CC1K_MAIN = 0x00, 
  CC1K_FREQ_2A = 0x01, 
  CC1K_FREQ_1A = 0x02, 
  CC1K_FREQ_0A = 0x03, 
  CC1K_FREQ_2B = 0x04, 
  CC1K_FREQ_1B = 0x05, 
  CC1K_FREQ_0B = 0x06, 
  CC1K_FSEP1 = 0x07, 
  CC1K_FSEP0 = 0x08, 
  CC1K_CURRENT = 0x09, 
  CC1K_FRONT_END = 0x0A, 
  CC1K_PA_POW = 0x0B, 
  CC1K_PLL = 0x0C, 
  CC1K_LOCK = 0x0D, 
  CC1K_CAL = 0x0E, 
  CC1K_MODEM2 = 0x0F, 
  CC1K_MODEM1 = 0x10, 
  CC1K_MODEM0 = 0x11, 
  CC1K_MATCH = 0x12, 
  CC1K_FSCTRL = 0x13, 
  CC1K_FSHAPE7 = 0x14, 
  CC1K_FSHAPE6 = 0x15, 
  CC1K_FSHAPE5 = 0x16, 
  CC1K_FSHAPE4 = 0x17, 
  CC1K_FSHAPE3 = 0x18, 
  CC1K_FSHAPE2 = 0x19, 
  CC1K_FSHAPE1 = 0x1A, 
  CC1K_FSDELAY = 0x1B, 
  CC1K_PRESCALER = 0x1C, 
  CC1K_TEST6 = 0x40, 
  CC1K_TEST5 = 0x41, 
  CC1K_TEST4 = 0x42, 
  CC1K_TEST3 = 0x43, 
  CC1K_TEST2 = 0x44, 
  CC1K_TEST1 = 0x45, 
  CC1K_TEST0 = 0x46, 


  CC1K_RXTX = 7, 
  CC1K_F_REG = 6, 
  CC1K_RX_PD = 5, 
  CC1K_TX_PD = 4, 
  CC1K_FS_PD = 3, 
  CC1K_CORE_PD = 2, 
  CC1K_BIAS_PD = 1, 
  CC1K_RESET_N = 0, 


  CC1K_VCO_CURRENT = 4, 
  CC1K_LO_DRIVE = 2, 
  CC1K_PA_DRIVE = 0, 


  CC1K_BUF_CURRENT = 5, 
  CC1K_LNA_CURRENT = 3, 
  CC1K_IF_RSSI = 1, 
  CC1K_XOSC_BYPASS = 0, 


  CC1K_PA_HIGHPOWER = 4, 
  CC1K_PA_LOWPOWER = 0, 


  CC1K_EXT_FILTER = 7, 
  CC1K_REFDIV = 3, 
  CC1K_ALARM_DISABLE = 2, 
  CC1K_ALARM_H = 1, 
  CC1K_ALARM_L = 0, 


  CC1K_LOCK_SELECT = 4, 
  CC1K_PLL_LOCK_ACCURACY = 3, 
  CC1K_PLL_LOCK_LENGTH = 2, 
  CC1K_LOCK_INSTANT = 1, 
  CC1K_LOCK_CONTINUOUS = 0, 


  CC1K_CAL_START = 7, 
  CC1K_CAL_DUAL = 6, 
  CC1K_CAL_WAIT = 5, 
  CC1K_CAL_CURRENT = 4, 
  CC1K_CAL_COMPLETE = 3, 
  CC1K_CAL_ITERATE = 0, 


  CC1K_PEAKDETECT = 7, 
  CC1K_PEAK_LEVEL_OFFSET = 0, 


  CC1K_MLIMIT = 5, 
  CC1K_LOCK_AVG_IN = 4, 
  CC1K_LOCK_AVG_MODE = 3, 
  CC1K_SETTLING = 1, 
  CC1K_MODEM_RESET_N = 0, 


  CC1K_BAUDRATE = 4, 
  CC1K_DATA_FORMAT = 2, 
  CC1K_XOSC_FREQ = 0, 


  CC1K_RX_MATCH = 4, 
  CC1K_TX_MATCH = 0, 


  CC1K_DITHER1 = 3, 
  CC1K_DITHER0 = 2, 
  CC1K_SHAPE = 1, 
  CC1K_FS_RESET_N = 0, 


  CC1K_PRE_SWING = 6, 
  CC1K_PRE_CURRENT = 4, 
  CC1K_IF_INPUT = 3, 
  CC1K_IF_FRONT = 2, 


  CC1K_LOOPFILTER_TP1 = 7, 
  CC1K_LOOPFILTER_TP2 = 6, 
  CC1K_CHP_OVERRIDE = 5, 
  CC1K_CHP_CO = 0, 


  CC1K_CHP_DISABLE = 5, 
  CC1K_VCO_OVERRIDE = 4, 
  CC1K_VCO_AO = 0, 


  CC1K_BREAK_LOOP = 4, 
  CC1K_CAL_DAC_OPEN = 0, 
#line 202
  CC1K_433_002_MHZ = 0x00, 
  CC1K_915_998_MHZ = 0x01, 
  CC1K_434_845_MHZ = 0x02, 
  CC1K_914_077_MHZ = 0x03, 
  CC1K_315_178_MHZ = 0x04, 


  CC1K_SquelchInit = 0x120, 
  CC1K_SquelchTableSize = 9, 
  CC1K_MaxRSSISamples = 5, 
  CC1K_Settling = 1, 
  CC1K_ValidPrecursor = 2, 
  CC1K_SquelchIntervalFast = 128, 
  CC1K_SquelchIntervalSlow = 2560, 
  CC1K_SquelchCount = 30, 
  CC1K_SquelchBuffer = 12, 

  CC1K_LPL_STATES = 9, 

  CC1K_LPL_PACKET_TIME = 16, 

  CC1K_LPL_CHECK_TIME = 16, 



  CC1K_LPL_MIN_INTERVAL = 5, 

  CC1K_LPL_MAX_INTERVAL = 10000
};
#line 248
static const_uint8_t CC1K_Params[6][20] = { 

{ 
0x31, 

0x58, 0x00, 0x00, 

0x57, 0xf6, 0x85, 

0X03, 0x55, (

4 << CC1K_VCO_CURRENT) | (1 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

12 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

0 << CC1K_PEAKDETECT) | (28 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x7c, 0x00, 0x00, 

0x7b, 0xf9, 0xae, 

0x02, 0x38, (

8 << CC1K_VCO_CURRENT) | (3 << CC1K_LO_DRIVE), ((


1 << CC1K_BUF_CURRENT) | (2 << CC1K_LNA_CURRENT)) | (1 << CC1K_IF_RSSI), (


0x8 << CC1K_PA_HIGHPOWER) | (0x0 << CC1K_PA_LOWPOWER), 


8 << CC1K_REFDIV, 


0x1 << CC1K_LOCK_SELECT, (


1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (


1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((


3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((


5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (


0x1 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

15 << CC1K_VCO_CURRENT) | (3 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x51, 0x00, 0x00, 

0x50, 0xf7, 0x4F, 

0X03, 0x0E, (

4 << CC1K_VCO_CURRENT) | (1 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

11 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 




{ 
0x31, 

0x5c, 0xe0, 0x00, 

0x5c, 0xdb, 0x42, 

0x01, 0xAA, (

8 << CC1K_VCO_CURRENT) | (3 << CC1K_LO_DRIVE), ((


1 << CC1K_BUF_CURRENT) | (2 << CC1K_LNA_CURRENT)) | (1 << CC1K_IF_RSSI), (


0x8 << CC1K_PA_HIGHPOWER) | (0x0 << CC1K_PA_LOWPOWER), 


6 << CC1K_REFDIV, 


0x1 << CC1K_LOCK_SELECT, (


1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (


1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((


3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((


5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (


0x1 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

15 << CC1K_VCO_CURRENT) | (3 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x45, 0x60, 0x00, 

0x45, 0x55, 0xBB, 

0X03, 0x9C, (

8 << CC1K_VCO_CURRENT) | (0 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

13 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((

5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (0 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) }, 



{ 
0x31, 

0x58, 0x00, 0x00, 

0x57, 0xf6, 0x85, 

0X03, 0x55, (

8 << CC1K_VCO_CURRENT) | (4 << CC1K_LO_DRIVE), 

1 << CC1K_IF_RSSI, (

0x0 << CC1K_PA_HIGHPOWER) | (0xf << CC1K_PA_LOWPOWER), 

12 << CC1K_REFDIV, 

0xe << CC1K_LOCK_SELECT, (

1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE), (

1 << CC1K_PEAKDETECT) | (33 << CC1K_PEAK_LEVEL_OFFSET), (((

3 << CC1K_MLIMIT) | (1 << CC1K_LOCK_AVG_MODE)) | (CC1K_Settling << CC1K_SETTLING)) | (1 << CC1K_MODEM_RESET_N), ((
5 << CC1K_BAUDRATE) | (1 << CC1K_DATA_FORMAT)) | (1 << CC1K_XOSC_FREQ), (

0x7 << CC1K_RX_MATCH) | (0x0 << CC1K_TX_MATCH), (

8 << CC1K_VCO_CURRENT) | (1 << CC1K_PA_DRIVE) } };
# 43 "/usr/bin/../lib/gcc/avr/4.1.2/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 105
typedef __gnuc_va_list va_list;
# 245 "/opt/tinyos-2.1.1/tos/lib/printf/avr_stdio.h"
struct __file {
  char *buf;
  unsigned char unget;
  uint8_t flags;
#line 264
  int size;
  int len;
  int (*put)(char arg_0x404e0a58, struct __file *arg_0x404e0c40);
  int (*get)(struct __file *arg_0x404df068);
  void *udata;
};
#line 408
extern struct __file *( __iob)[];
#line 420
struct __file;
#line 639
extern int printf(const char * __fmt, ...);
# 6 "/opt/tinyos-2.1.1/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4299 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4300 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 12 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Msg.h"
#line 6
typedef nx_struct CC1KHeader {
  nx_am_addr_t dest;
  nx_am_addr_t source;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) cc1000_header_t;



#line 14
typedef nx_struct CC1KFooter {
  nxle_uint16_t crc;
} __attribute__((packed)) cc1000_footer_t;










#line 18
typedef enum __nesc_unnamed4301 {
  CC1000_ACK_BIT = 0x1, 
  CC1000_WHITE_BIT = 0x2, 





  CC1000_WHITE_BIT_THRESH = 60
} CC1KMetadataBits;








#line 29
typedef nx_struct CC1KMetadata {
  nx_int16_t strength_or_preamble;
  nx_uint8_t metadataBits;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint8_t sendSecurityMode;
  nx_uint8_t receiveSecurityMode;
} __attribute__((packed)) cc1000_metadata_t;

enum __nesc_unnamed4302 {

  CC1000_INVALID_TIMESTAMP = 0x80000000L
};
# 72 "/opt/tinyos-2.1.1/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4303 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4304 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4305 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 49 "/opt/tinyos-2.1.1/tos/platforms/mica2/platform_message.h"
#line 46
typedef union message_header {
  cc1000_header_t cc1k;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc1000_footer_t cc1k;
} message_footer_t;




#line 55
typedef union message_metadata {
  cc1000_metadata_t cc1k;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/opt/tinyos-2.1.1/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 59 "/opt/tinyos-2.1.1/tos/lib/printf/printf.h"
int printfflush();






#line 64
typedef nx_struct printf_msg {
  nx_uint8_t buffer[28];
} __attribute__((packed)) printf_msg_t;

enum __nesc_unnamed4306 {
  AM_PRINTF_MSG = 100
};
# 32 "/opt/tinyos-2.1.1/tos/types/Leds.h"
enum __nesc_unnamed4307 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4308 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 66
#line 54
typedef union __nesc_unnamed4309 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4310 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4311 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4312 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4313 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4314 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4315 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
# 78 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static int uart_putchar(char c, struct __file *stream);
static struct __file atm128_stdout = 
{ .put = (int (*)(char c, struct __file *stream))uart_putchar, .get = (void *)0, .flags = 0x0002, .udata = 0 };
# 6 "omac.h"
const int16_t HOP[21] = { -1, -1, 1, 3, -1, 2, 1, 3, 3, 3, 2, 3, 2, 2, 3, 0, 3, -1, -1, -1, 3 };
const uint16_t SLEEPTIME[4] = { 0, 11, 15, 65500 };
# 13 "OMACC.nc"
const uint16_t SAMPLING_FREQUENCY = 3000;








#line 18
typedef nx_struct radio_temp__packet {
  nx_int16_t isPreamble;
  nx_int16_t hop_from_sink;
  nx_int16_t data;
} __attribute__((packed)) radio_temp_packet_t;
# 28 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;
# 33 "/opt/tinyos-2.1.1/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef uint16_t HplAtm128Timer3P__CompareA__size_type;
typedef uint16_t HplAtm128Timer3P__Capture__size_type;
typedef uint16_t HplAtm128Timer3P__CompareB__size_type;
typedef uint16_t HplAtm128Timer3P__CompareC__size_type;
typedef uint16_t HplAtm128Timer3P__Timer__timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__size_type;
enum SerialAMQueueP____nesc_unnamed4316 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
typedef uint8_t /*PrintfC.QueueC*/QueueC__0__queue_t;
typedef /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__t;
typedef uint8_t PrintfP__Queue__t;
typedef TMilli OMACC__Timer__precision_tag;
enum AMQueueP____nesc_unnamed4317 {
  AMQueueP__NUM_CLIENTS = 1U
};
typedef TMicro CC1000CsmaP__BusyWait__precision_tag;
typedef uint16_t CC1000CsmaP__BusyWait__size_type;
typedef uint16_t CC1000CsmaP__RssiNoiseFloor__val_t;
typedef TMicro CC1000CsmaP__LTime__precision_tag;
typedef uint16_t CC1000CsmaP__RssiCheckChannel__val_t;
typedef TMilli CC1000CsmaP__WakeupTimer__precision_tag;
typedef uint16_t CC1000CsmaP__RssiPulseCheck__val_t;
typedef T32khz CC1000SendReceiveP__PacketTimeStamp32khz__precision_tag;
typedef uint32_t CC1000SendReceiveP__PacketTimeStamp32khz__size_type;
typedef uint16_t CC1000SendReceiveP__RssiRx__val_t;
typedef T32khz CC1000SendReceiveP__LocalTime32khz__precision_tag;
typedef TMilli CC1000SendReceiveP__LocalTimeMilli__precision_tag;
typedef TMilli CC1000SendReceiveP__PacketTimeStampMilli__precision_tag;
typedef uint32_t CC1000SendReceiveP__PacketTimeStampMilli__size_type;
typedef uint16_t CC1000RssiP__ActualRssi__val_t;
typedef uint16_t CC1000RssiP__Rssi__val_t;
typedef TMicro CC1000ControlP__BusyWait__precision_tag;
typedef uint16_t CC1000ControlP__BusyWait__size_type;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t;
enum /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0____nesc_unnamed4318 {
  AdcReadNowClientC__0__ID = 0U, AdcReadNowClientC__0__HAL_ID = 0U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum HilTimerMilliC____nesc_unnamed4319 {
  HilTimerMilliC__TIMER_COUNT = 3U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef uint8_t HplAtm128Timer0AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef TMicro /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__precision_tag;
typedef /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__precision_tag /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__precision_tag /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__Counter__size_type;
typedef uint16_t HplAtm128Timer1P__CompareA__size_type;
typedef uint16_t HplAtm128Timer1P__Capture__size_type;
typedef uint16_t HplAtm128Timer1P__CompareB__size_type;
typedef uint16_t HplAtm128Timer1P__CompareC__size_type;
typedef uint16_t HplAtm128Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__1__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__1__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__timer_size;
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__1__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__1__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__1__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__1__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__1__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC__1__to_size_type;
typedef TOne /*Counter32khz32C.Transform32*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC__1__from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC__1__upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__1__from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__1__from_size_type /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__1__to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__1__Counter__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__1__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__1__Counter__size_type;
typedef T32khz /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__precision_tag;
typedef /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__precision_tag /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__LocalTime__precision_tag;
typedef /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__precision_tag /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__precision_tag;
typedef uint32_t /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__size_type;
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 51
static error_t MotePlatformP__PlatformInit__init(void );
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t HplCC1000P__RssiConfig__getRefVoltage(void );
#line 25
static uint8_t HplCC1000P__RssiConfig__getChannel(void );
#line 39
static uint8_t HplCC1000P__RssiConfig__getPrescaler(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t HplCC1000P__PlatformInit__init(void );
# 52 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000.nc"
static void HplCC1000P__HplCC1000__init(void );
#line 66
static uint8_t HplCC1000P__HplCC1000__read(uint8_t addr);
#line 59
static void HplCC1000P__HplCC1000__write(uint8_t addr, uint8_t data);
# 74 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000Spi.nc"
static void HplCC1000SpiP__HplCC1000Spi__initSlave(void );
#line 69
static void HplCC1000SpiP__HplCC1000Spi__disableIntr(void );
#line 45
static void HplCC1000SpiP__HplCC1000Spi__writeByte(uint8_t data);
#line 64
static void HplCC1000SpiP__HplCC1000Spi__enableIntr(void );
#line 79
static void HplCC1000SpiP__HplCC1000Spi__txMode(void );




static void HplCC1000SpiP__HplCC1000Spi__rxMode(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t HplCC1000SpiP__PlatformInit__init(void );
# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeInput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeInput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__get(void );


static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
#line 53
static uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 45 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403602b0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 45 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403602b0);
# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 61
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 54
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 36 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40549888, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 83
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 37 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x4054d298, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 63
message_t * amsg);
#line 92
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 132
message_t * amsg);
#line 151
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 64
static void SerialP__RunTx__runTask(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 38
static void SerialP__SerialFlush__default__flush(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 83 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 74
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 60 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 51
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40621010, 
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40621010, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 39 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40612918, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40621b10, 
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40621b10);
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40621b10, 
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 70 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 51 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 45 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 68
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 54
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 74
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static Atm128_ETIFR_t HplAtm128Timer3P__TimerCtrl__getInterruptFlag(void );
#line 41
static void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__default__fired(void );
# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P__Capture__default__captured(HplAtm128Timer3P__Capture__size_type t);
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__default__fired(void );
#line 49
static void HplAtm128Timer3P__CompareC__default__fired(void );
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer3P__Timer__test(void );
#line 52
static HplAtm128Timer3P__Timer__timer_size HplAtm128Timer3P__Timer__get(void );
#line 95
static void HplAtm128Timer3P__Timer__setScale(uint8_t scale);
#line 58
static void HplAtm128Timer3P__Timer__set(HplAtm128Timer3P__Timer__timer_size t);










static void HplAtm128Timer3P__Timer__start(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
#line 53
static /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__get(void );
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x407c0490, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407c19d8, 
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407c19d8, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 64
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
static 
#line 71
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__head(void );
#line 90
static error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(
#line 86
/*PrintfC.QueueC*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );







static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void PrintfP__SerialControl__startDone(error_t error);
#line 117
static void PrintfP__SerialControl__stopDone(error_t error);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void PrintfP__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void PrintfP__retrySend__runTask(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void PrintfP__MainBoot__booted(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 72
static void LedsP__Leds__led1Toggle(void );
#line 89
static void LedsP__Leds__led2Toggle(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void OMACC__AMControl__startDone(error_t error);
#line 117
static void OMACC__AMControl__stopDone(error_t error);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void OMACC__Boot__booted(void );
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void OMACC__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



OMACC__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void OMACC__Timer__fired(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x407c0490, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407c19d8, 
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407c19d8, 
# 111 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 89
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407c19d8, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void CC1000ActiveMessageP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC1000ActiveMessageP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t CC1000ActiveMessageP__AMSend__send(
# 40 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x408912b0, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

CC1000ActiveMessageP__AMSend__getPayload(
# 40 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x408912b0, 
# 121 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC1000ActiveMessageP__Snoop__default__receive(
# 42 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x408ac3e0, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



CC1000ActiveMessageP__Receive__default__receive(
# 41 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x40891c70, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t CC1000ActiveMessageP__AMPacket__address(void );









static am_addr_t CC1000ActiveMessageP__AMPacket__destination(
#line 63
message_t * amsg);
#line 92
static void CC1000ActiveMessageP__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t CC1000ActiveMessageP__AMPacket__type(
#line 132
message_t * amsg);
#line 151
static void CC1000ActiveMessageP__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool CC1000ActiveMessageP__AMPacket__isForMe(
#line 122
message_t * amsg);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t CC1000CsmaP__SplitControl__start(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP__setWakeupTask__runTask(void );
#line 64
static void CC1000CsmaP__startStopDone__runTask(void );
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP__RssiNoiseFloor__readDone(error_t result, CC1000CsmaP__RssiNoiseFloor__val_t val);
# 65 "/opt/tinyos-2.1.1/tos/interfaces/LowPowerListening.nc"
static void CC1000CsmaP__LowPowerListening__setRemoteWakeupInterval(
#line 62
message_t * msg, 


uint16_t intervalMs);
#line 52
static void CC1000CsmaP__LowPowerListening__setLocalWakeupInterval(uint16_t intervalMs);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t CC1000CsmaP__Init__init(void );
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP__RssiCheckChannel__readDone(error_t result, CC1000CsmaP__RssiCheckChannel__val_t val);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP__sleepCheck__runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void CC1000CsmaP__WakeupTimer__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void CC1000CsmaP__adjustSquelch__runTask(void );
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static void CC1000CsmaP__RssiPulseCheck__readDone(error_t result, CC1000CsmaP__RssiPulseCheck__val_t val);
# 45 "/opt/tinyos-2.1.1/tos/interfaces/CsmaBackoff.nc"
static uint16_t CC1000CsmaP__CsmaBackoff__default__congestion(
#line 42
message_t * m);
#line 37
static uint16_t CC1000CsmaP__CsmaBackoff__default__initial(
#line 34
message_t * m);
# 25 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
static void CC1000CsmaP__ByteRadio__rts(message_t * msg);
#line 95
static void CC1000CsmaP__ByteRadio__rxDone(void );
#line 74
static void CC1000CsmaP__ByteRadio__idleByte(bool preamble);
#line 44
static void CC1000CsmaP__ByteRadio__sendDone(void );
#line 90
static void CC1000CsmaP__ByteRadio__rx(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t CC1000SendReceiveP__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


CC1000SendReceiveP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 83
static void CC1000SendReceiveP__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 92 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000Spi.nc"
static void CC1000SendReceiveP__HplCC1000Spi__dataReady(uint8_t data);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t CC1000SendReceiveP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/PacketTimeStamp.nc"
static void CC1000SendReceiveP__PacketTimeStamp32khz__set(
#line 62
message_t * msg, 




CC1000SendReceiveP__PacketTimeStamp32khz__size_type value);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t CC1000SendReceiveP__Init__init(void );
# 47 "/opt/tinyos-2.1.1/tos/chips/cc1000/PacketTimeSyncOffset.nc"
static uint8_t CC1000SendReceiveP__PacketTimeSyncOffset__get(
#line 42
message_t * msg);
#line 39
static bool CC1000SendReceiveP__PacketTimeSyncOffset__isSet(
#line 35
message_t * msg);
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static void CC1000SendReceiveP__RssiRx__readDone(error_t result, CC1000SendReceiveP__RssiRx__val_t val);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void CC1000SendReceiveP__signalPacketSent__runTask(void );
#line 64
static void CC1000SendReceiveP__signalPacketReceived__runTask(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t CC1000SendReceiveP__StdControl__start(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
static void CC1000SendReceiveP__ByteRadio__listen(void );
#line 85
static bool CC1000SendReceiveP__ByteRadio__syncing(void );
#line 32
static void CC1000SendReceiveP__ByteRadio__cts(void );
#line 50
static void CC1000SendReceiveP__ByteRadio__setPreambleLength(uint16_t bytes);
#line 66
static void CC1000SendReceiveP__ByteRadio__off(void );
#line 39
static message_t *CC1000SendReceiveP__ByteRadio__getTxMessage(void );
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static void CC1000RssiP__ActualRssi__readDone(error_t result, CC1000RssiP__ActualRssi__val_t val);
# 48 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000RssiP.nc"
static void CC1000RssiP__cancel(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void CC1000RssiP__Resource__granted(void );
# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static error_t CC1000RssiP__Rssi__read(
# 47 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x409e6da0);
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static void CC1000RssiP__Rssi__default__readDone(
# 47 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x409e6da0, 
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
error_t result, CC1000RssiP__Rssi__val_t val);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t CC1000SquelchP__Init__init(void );
# 46 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Squelch.nc"
static uint16_t CC1000SquelchP__CC1000Squelch__get(void );






static bool CC1000SquelchP__CC1000Squelch__settled(void );
#line 40
static void CC1000SquelchP__CC1000Squelch__adjust(uint16_t data);
# 49 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
static void CC1000ControlP__CC1000Control__tunePreset(uint8_t freq);
#line 93
static void CC1000ControlP__CC1000Control__biasOn(void );
#line 39
static void CC1000ControlP__CC1000Control__init(void );
#line 85
static void CC1000ControlP__CC1000Control__coreOn(void );
#line 73
static void CC1000ControlP__CC1000Control__txMode(void );
#line 136
static bool CC1000ControlP__CC1000Control__getLOStatus(void );
#line 78
static void CC1000ControlP__CC1000Control__rxMode(void );
#line 68
static void CC1000ControlP__CC1000Control__off(void );
#line 103
static void CC1000ControlP__CC1000Control__setRFPower(uint8_t power);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t Atm128AdcP__Init__init(void );
# 110 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 147 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP__AsyncStdControl__start(void );









static error_t Atm128AdcP__AsyncStdControl__stop(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );
#line 73
static void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );
#line 49
static void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 141
static bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
#line 77
static void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );








static void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 60
static void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
#line 55
static Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );










static uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40aa9da8);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40aa9da8);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40acc1b8);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40acc1b8);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40aa9380);
# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40aa9380);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40aa9380);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40aa9380);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );
# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static error_t AdcP__ReadNow__read(
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40b02088);
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40b02088, 
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40b015c0);
# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getChannel(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40b015c0);
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40b015c0);
# 72 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void AdcP__acquiredData__runTask(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40b100c8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(
# 26 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40b0f0e8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t val);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40b0e010);
# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 35
static uint32_t RandomMlcgC__Random__rand32(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 37
static void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t control);
# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP__Timer__timer_size HplAtm128Timer0AsyncP__Timer__get(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 72
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40beb9f0);
# 81 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40beb9f0);
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40beb9f0, 
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40beb9f0, 
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 44 "/opt/tinyos-2.1.1/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 55 "/opt/tinyos-2.1.1/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 50 "/opt/tinyos-2.1.1/tos/lib/timer/LocalTime.nc"
static uint32_t /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__LocalTime__get(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__Counter__overflow(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__default__fired(void );
# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__default__captured(HplAtm128Timer1P__Capture__size_type t);
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__default__fired(void );
#line 49
static void HplAtm128Timer1P__CompareC__default__fired(void );
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer1P__Timer__test(void );
#line 52
static HplAtm128Timer1P__Timer__timer_size HplAtm128Timer1P__Timer__get(void );
#line 95
static void HplAtm128Timer1P__Timer__setScale(uint8_t scale);
#line 58
static void HplAtm128Timer1P__Timer__set(HplAtm128Timer1P__Timer__timer_size t);










static void HplAtm128Timer1P__Timer__start(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__1__Init__init(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__overflow(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__isOverflowPending(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void );
#line 53
static /*Counter32khz32C.Transform32*/TransformCounterC__1__Counter__size_type /*Counter32khz32C.Transform32*/TransformCounterC__1__Counter__get(void );
# 50 "/opt/tinyos-2.1.1/tos/lib/timer/LocalTime.nc"
static uint32_t /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__LocalTime__get(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__overflow(void );
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
#line 69
static error_t /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 6 "/opt/tinyos-2.1.1/tos/interfaces/SystemLowPowerListening.nc"
static uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDefaultRemoteWakeupInterval(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 51
static error_t PlatformP__MeasureClock__init(void );
# 42 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void );






static inline error_t PlatformP__Init__init(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 30
static void MotePlatformP__SerialIdPin__clr(void );
# 23 "/opt/tinyos-2.1.1/tos/platforms/mica2/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void HplCC1000P__PCLK__makeOutput(void );
#line 29
static void HplCC1000P__PCLK__set(void );
static void HplCC1000P__PCLK__clr(void );


static void HplCC1000P__CHP_OUT__makeInput(void );

static void HplCC1000P__PALE__makeOutput(void );
#line 29
static void HplCC1000P__PALE__set(void );
static void HplCC1000P__PALE__clr(void );


static void HplCC1000P__PDATA__makeInput(void );
#line 32
static bool HplCC1000P__PDATA__get(void );


static void HplCC1000P__PDATA__makeOutput(void );
#line 29
static void HplCC1000P__PDATA__set(void );
static void HplCC1000P__PDATA__clr(void );
# 57 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline error_t HplCC1000P__PlatformInit__init(void );
#line 78
static inline void HplCC1000P__HplCC1000__init(void );
#line 94
static void HplCC1000P__HplCC1000__write(uint8_t addr, uint8_t data);
#line 146
static inline uint8_t HplCC1000P__HplCC1000__read(uint8_t addr);
#line 195
static inline uint8_t HplCC1000P__RssiConfig__getChannel(void );



static inline uint8_t HplCC1000P__RssiConfig__getRefVoltage(void );



static inline uint8_t HplCC1000P__RssiConfig__getPrescaler(void );
# 92 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000Spi.nc"
static void HplCC1000SpiP__HplCC1000Spi__dataReady(uint8_t data);
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void HplCC1000SpiP__SpiSck__makeInput(void );
#line 33
static void HplCC1000SpiP__SpiMiso__makeInput(void );

static void HplCC1000SpiP__SpiMiso__makeOutput(void );
#line 33
static void HplCC1000SpiP__SpiMosi__makeInput(void );

static void HplCC1000SpiP__SpiMosi__makeOutput(void );
#line 33
static void HplCC1000SpiP__OC1C__makeInput(void );
# 53 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
uint8_t HplCC1000SpiP__outgoingByte;

static inline error_t HplCC1000SpiP__PlatformInit__init(void );






void __vector_17(void ) __attribute((signal))   ;







static inline void HplCC1000SpiP__HplCC1000Spi__writeByte(uint8_t data);
#line 82
static inline void HplCC1000SpiP__HplCC1000Spi__enableIntr(void );






static inline void HplCC1000SpiP__HplCC1000Spi__disableIntr(void );






static inline void HplCC1000SpiP__HplCC1000Spi__initSlave(void );








static inline void HplCC1000SpiP__HplCC1000Spi__txMode(void );




static inline void HplCC1000SpiP__HplCC1000Spi__rxMode(void );
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void );
# 33 "/opt/tinyos-2.1.1/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4320 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 103
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
#line 120
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 61
static void RealMainP__Scheduler__taskLoop(void );
#line 54
static bool RealMainP__Scheduler__runNextTask(void );
# 52 "/opt/tinyos-2.1.1/tos/system/RealMainP.nc"
int main(void )   ;
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 45 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403602b0);
# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 50 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4321 {

  SchedulerBasicP__NUM_TASKS = 21U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 86
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 113
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 138
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 159
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 58 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 97
static inline void McuSleepC__McuSleep__sleep(void );
#line 110
static inline void McuSleepC__McuPowerState__update(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 36 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40549888, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 37 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x4054d298, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 90
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 137
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 161
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 117
static void SerialP__SplitControl__stopDone(error_t error);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 38 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 45 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 68
static void SerialP__SerialFrameComm__resetReceive(void );
#line 54
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 70 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 51 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 189 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4322 {
#line 189
  SerialP__RunTx = 0U
};
#line 189
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 320
enum SerialP____nesc_unnamed4323 {
#line 320
  SerialP__startDoneTask = 1U
};
#line 320
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];





enum SerialP____nesc_unnamed4324 {
#line 326
  SerialP__stopDoneTask = 2U
};
#line 326
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4325 {
#line 335
  SerialP__defaultSerialFlushTask = 3U
};
#line 335
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 79
enum SerialP____nesc_unnamed4326 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4327 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4328 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 109
typedef enum SerialP____nesc_unnamed4329 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4330 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 122
typedef struct SerialP____nesc_unnamed4331 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 128
typedef struct SerialP____nesc_unnamed4332 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 133
typedef struct SerialP____nesc_unnamed4333 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 205
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 232
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 295
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );





static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );




static void SerialP__testOff(void );
#line 384
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 502
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 539
static inline void SerialP__RunTx__runTask(void );
#line 642
static inline void SerialP__SerialFrameComm__putDone(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40621010, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 39 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40612918, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40621b10, 
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40621b10);
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40621b10, 
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 60 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 51
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 147 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4334 {
#line 147
  SerialDispatcherP__0__signalSendDone = 4U
};
#line 147
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 264
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4335 {
#line 264
  SerialDispatcherP__0__receiveTask = 5U
};
#line 264
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4336 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4337 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4338 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 147
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 167
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 183
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 233
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 264
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 285
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 347
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 83 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 74
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 47 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
#line 44
typedef struct HdlcTranslateC____nesc_unnamed4339 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 86
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );





static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 104
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);










static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 87 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 107
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 164
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_18(void ) __attribute((signal))   ;





void __vector_20(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 265
void __vector_30(void ) __attribute((signal))   ;




void __vector_32(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__fired(void );
# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t);
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__fired(void );
#line 49
static void HplAtm128Timer3P__CompareC__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P__Timer__overflow(void );
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__Timer__get(void );


static inline void HplAtm128Timer3P__Timer__set(uint16_t t);








static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x);
#line 106
static inline Atm128_ETIFR_t HplAtm128Timer3P__TimerCtrl__getInterruptFlag(void );
#line 127
static inline void HplAtm128Timer3P__Timer__start(void );
#line 139
static inline bool HplAtm128Timer3P__Timer__test(void );
#line 188
static inline void HplAtm128Timer3P__CompareA__default__fired(void );
void __vector_26(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__CompareB__default__fired(void );
void __vector_27(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__CompareC__default__fired(void );
void __vector_28(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time);
void __vector_25(void ) __attribute((interrupt))   ;



void __vector_29(void ) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 58
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 52
static /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 56 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__0____nesc_unnamed4340 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static inline /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__get(void );
#line 122
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x407c0490, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407c19d8, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 63
message_t * msg);
#line 83
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 132
message_t * amsg);
# 118 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4341 {
#line 118
  AMQueueImplP__0__CancelTask = 6U
};
#line 118
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 161
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4342 {
#line 161
  AMQueueImplP__0__errorTask = 7U
};
#line 161
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 49
#line 47
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4343 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1 / 8 + 1];

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 82
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 155
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 181
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 48 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
/*PrintfC.QueueC*/QueueC__0__queue_t  /*PrintfC.QueueC*/QueueC__0__queue[250];
uint8_t /*PrintfC.QueueC*/QueueC__0__head = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__tail = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__size = 0;

static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );



static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void );



static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void );
#line 85
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void PrintfP__Boot__booted(void );
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t PrintfP__SerialControl__start(void );
# 90 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
static error_t PrintfP__Queue__enqueue(
#line 86
PrintfP__Queue__t  newVal);
#line 81
static 
#line 79
PrintfP__Queue__t  

PrintfP__Queue__dequeue(void );
#line 50
static bool PrintfP__Queue__empty(void );







static uint8_t PrintfP__Queue__size(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t PrintfP__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static 
#line 112
void * 


PrintfP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t PrintfP__retrySend__postTask(void );
# 127 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
enum PrintfP____nesc_unnamed4344 {
#line 127
  PrintfP__retrySend = 8U
};
#line 127
typedef int PrintfP____nesc_sillytask_retrySend[PrintfP__retrySend];
#line 100
enum PrintfP____nesc_unnamed4345 {
  PrintfP__S_STOPPED, 
  PrintfP__S_STARTED, 
  PrintfP__S_FLUSHING
};

message_t PrintfP__printfMsg;
uint8_t PrintfP__state = PrintfP__S_STOPPED;

static inline void PrintfP__MainBoot__booted(void );



static inline void PrintfP__SerialControl__startDone(error_t error);









static inline void PrintfP__SerialControl__stopDone(error_t error);



static inline void PrintfP__retrySend__runTask(void );




static void PrintfP__sendNext(void );










int printfflush(void )   ;
#line 155
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error);
#line 168
int uart_putchar(char c, struct __file *stream) __attribute((noinline))   ;
# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 29
static void LedsP__Led0__set(void );

static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 29
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 29
static void LedsP__Led2__set(void );
# 45 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 73
static inline void LedsP__Leds__led0Toggle(void );
#line 88
static inline void LedsP__Leds__led1Toggle(void );
#line 103
static inline void LedsP__Leds__led2Toggle(void );
# 65 "/opt/tinyos-2.1.1/tos/interfaces/LowPowerListening.nc"
static void OMACC__LPL__setRemoteWakeupInterval(
#line 62
message_t * msg, 


uint16_t intervalMs);
#line 52
static void OMACC__LPL__setLocalWakeupInterval(uint16_t intervalMs);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t OMACC__AMControl__start(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t OMACC__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

OMACC__AMSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void OMACC__Leds__led0Toggle(void );
#line 72
static void OMACC__Leds__led1Toggle(void );
#line 89
static void OMACC__Leds__led2Toggle(void );
# 103 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
static void OMACC__CC1000Control__setRFPower(uint8_t power);
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void OMACC__Timer__startPeriodic(uint32_t dt);
# 54 "OMACC.nc"
message_t OMACC__MSG;
uint8_t OMACC__dataReady = 0;
message_t *OMACC__childMsg;
int16_t OMACC__temp = 0;
int16_t OMACC__myHop = 0;


static inline void OMACC__setMyHop(void );







static inline uint16_t OMACC__getSelfSleepTime(void );



static inline uint16_t OMACC__getParentSleepTime(void );



static void OMACC__sendMessage(message_t *msg);
#line 101
static inline void OMACC__Boot__booted(void );
#line 113
static inline void OMACC__AMControl__startDone(error_t err);
#line 126
static inline void OMACC__AMControl__stopDone(error_t err);

static inline void OMACC__Timer__fired(void );
#line 165
static inline message_t *OMACC__Receive__receive(message_t *msg, void *payload, uint8_t len);
#line 205
static inline void OMACC__AMSend__sendDone(message_t *bufPtr, error_t error);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static void /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);







static inline void */*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(message_t *m, uint8_t len);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x407c0490, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x407c0490, 
# 121 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407c19d8, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(
#line 63
message_t * msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(
#line 132
message_t * amsg);
# 118 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4346 {
#line 118
  AMQueueImplP__1__CancelTask = 9U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4347 {
#line 161
  AMQueueImplP__1__errorTask = 10U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4348 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[1 / 8 + 1];

static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void );
#line 82
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
#line 155
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );




static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );
#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 203
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t CC1000ActiveMessageP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
# 49 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static am_addr_t CC1000ActiveMessageP__amAddress(void );
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void CC1000ActiveMessageP__AMSend__sendDone(
# 40 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x408912b0, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC1000ActiveMessageP__Snoop__receive(
# 42 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x408ac3e0, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static 
#line 112
void * 


CC1000ActiveMessageP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC1000ActiveMessageP__Receive__receive(
# 41 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
am_id_t arg_0x40891c70, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 54 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline cc1000_header_t * CC1000ActiveMessageP__getHeader(message_t * amsg);



static inline cc1000_footer_t *CC1000ActiveMessageP__getFooter(message_t *amsg);



static error_t CC1000ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 77
static inline void CC1000ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result);







static inline void *CC1000ActiveMessageP__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len);





static inline message_t *CC1000ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 104
static inline am_addr_t CC1000ActiveMessageP__AMPacket__address(void );



static am_addr_t CC1000ActiveMessageP__AMPacket__destination(message_t *amsg);









static inline void CC1000ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC1000ActiveMessageP__AMPacket__isForMe(message_t *amsg);




static am_id_t CC1000ActiveMessageP__AMPacket__type(message_t *amsg);




static inline void CC1000ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type);
#line 157
static inline message_t *CC1000ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC1000ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void CC1000CsmaP__SplitControl__startDone(error_t error);
#line 117
static void CC1000CsmaP__SplitControl__stopDone(error_t error);
# 55 "/opt/tinyos-2.1.1/tos/lib/timer/BusyWait.nc"
static void CC1000CsmaP__BusyWait__wait(CC1000CsmaP__BusyWait__size_type dt);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP__setWakeupTask__postTask(void );
#line 56
static error_t CC1000CsmaP__startStopDone__postTask(void );
# 80 "CC1000CsmaP.nc"
static void CC1000CsmaP__cancelRssi(void );
# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP__RssiNoiseFloor__read(void );
# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t CC1000CsmaP__Random__rand16(void );
# 50 "/opt/tinyos-2.1.1/tos/lib/timer/LocalTime.nc"
static uint32_t CC1000CsmaP__LTime__get(void );
# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP__RssiCheckChannel__read(void );
# 46 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Squelch.nc"
static uint16_t CC1000CsmaP__CC1000Squelch__get(void );






static bool CC1000CsmaP__CC1000Squelch__settled(void );
#line 40
static void CC1000CsmaP__CC1000Squelch__adjust(uint16_t data);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP__sleepCheck__postTask(void );
# 81 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static bool CC1000CsmaP__WakeupTimer__isRunning(void );
#line 62
static void CC1000CsmaP__WakeupTimer__startOneShot(uint32_t dt);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t CC1000CsmaP__ByteRadioInit__init(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t CC1000CsmaP__adjustSquelch__postTask(void );
# 93 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
static void CC1000CsmaP__CC1000Control__biasOn(void );
#line 39
static void CC1000CsmaP__CC1000Control__init(void );
#line 85
static void CC1000CsmaP__CC1000Control__coreOn(void );
#line 78
static void CC1000CsmaP__CC1000Control__rxMode(void );
#line 68
static void CC1000CsmaP__CC1000Control__off(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t CC1000CsmaP__ByteRadioControl__start(void );
# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static error_t CC1000CsmaP__RssiPulseCheck__read(void );
# 45 "/opt/tinyos-2.1.1/tos/interfaces/CsmaBackoff.nc"
static uint16_t CC1000CsmaP__CsmaBackoff__congestion(
#line 42
message_t * m);
#line 37
static uint16_t CC1000CsmaP__CsmaBackoff__initial(
#line 34
message_t * m);
# 61 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
static void CC1000CsmaP__ByteRadio__listen(void );
#line 85
static bool CC1000CsmaP__ByteRadio__syncing(void );
#line 32
static void CC1000CsmaP__ByteRadio__cts(void );
#line 50
static void CC1000CsmaP__ByteRadio__setPreambleLength(uint16_t bytes);
#line 66
static void CC1000CsmaP__ByteRadio__off(void );
#line 39
static message_t *CC1000CsmaP__ByteRadio__getTxMessage(void );
# 112 "CC1000CsmaP.nc"
enum CC1000CsmaP____nesc_unnamed4349 {
#line 112
  CC1000CsmaP__setWakeupTask = 11U
};
#line 112
typedef int CC1000CsmaP____nesc_sillytask_setWakeupTask[CC1000CsmaP__setWakeupTask];
#line 187
enum CC1000CsmaP____nesc_unnamed4350 {
#line 187
  CC1000CsmaP__startStopDone = 12U
};
#line 187
typedef int CC1000CsmaP____nesc_sillytask_startStopDone[CC1000CsmaP__startStopDone];
#line 318
enum CC1000CsmaP____nesc_unnamed4351 {
#line 318
  CC1000CsmaP__sleepCheck = 13U
};
#line 318
typedef int CC1000CsmaP____nesc_sillytask_sleepCheck[CC1000CsmaP__sleepCheck];
#line 349
enum CC1000CsmaP____nesc_unnamed4352 {
#line 349
  CC1000CsmaP__adjustSquelch = 14U
};
#line 349
typedef int CC1000CsmaP____nesc_sillytask_adjustSquelch[CC1000CsmaP__adjustSquelch];
#line 85
enum CC1000CsmaP____nesc_unnamed4353 {
  CC1000CsmaP__DISABLED_STATE, 
  CC1000CsmaP__IDLE_STATE, 
  CC1000CsmaP__RX_STATE, 
  CC1000CsmaP__TX_STATE, 
  CC1000CsmaP__POWERDOWN_STATE, 
  CC1000CsmaP__PULSECHECK_STATE
};

enum CC1000CsmaP____nesc_unnamed4354 {
  CC1000CsmaP__TIME_AFTER_CHECK = 30
};

uint8_t CC1000CsmaP__radioState = CC1000CsmaP__DISABLED_STATE;



#line 99
struct CC1000CsmaP____nesc_unnamed4355 {
  uint8_t ccaOff : 1;
  uint8_t txPending : 1;
} CC1000CsmaP__f;
uint8_t CC1000CsmaP__count;
uint8_t CC1000CsmaP__clearCount;

int16_t CC1000CsmaP__macDelay;

uint16_t CC1000CsmaP__sleepTime;

uint16_t CC1000CsmaP__rssiForSquelch;



static inline cc1000_metadata_t * CC1000CsmaP__getMetadata(message_t * amsg);



static uint32_t CC1000CsmaP__getLocalTime(void );







static inline void CC1000CsmaP__enterIdleState(void );




static inline void CC1000CsmaP__enterIdleStateSetWakeup(void );









static inline void CC1000CsmaP__enterPowerDownState(void );




static inline void CC1000CsmaP__enterPulseCheckState(void );




static inline void CC1000CsmaP__enterRxState(void );




static inline void CC1000CsmaP__enterTxState(void );





static void CC1000CsmaP__radioOn(void );







static inline void CC1000CsmaP__radioOff(void );




static inline void CC1000CsmaP__setPreambleLength(message_t * msg);




static inline error_t CC1000CsmaP__Init__init(void );






static inline void CC1000CsmaP__startStopDone__runTask(void );










static error_t CC1000CsmaP__SplitControl__start(void );
#line 235
static void CC1000CsmaP__setWakeup(void );
#line 267
static inline void CC1000CsmaP__setWakeupTask__runTask(void );



static inline void CC1000CsmaP__WakeupTimer__fired(void );
#line 318
static inline void CC1000CsmaP__sleepCheck__runTask(void );
#line 351
static inline void CC1000CsmaP__RssiPulseCheck__readDone(error_t result, uint16_t data);
#line 393
static inline void CC1000CsmaP__ByteRadio__rts(message_t * msg);
#line 409
static inline void CC1000CsmaP__ByteRadio__sendDone(void );






static inline void CC1000CsmaP__congestion(void );



static inline void CC1000CsmaP__ByteRadio__idleByte(bool preamble);
#line 434
static inline void CC1000CsmaP__RssiCheckChannel__readDone(error_t result, uint16_t data);
#line 465
static inline void CC1000CsmaP__ByteRadio__rx(void );





static void CC1000CsmaP__ByteRadio__rxDone(void );










static inline void CC1000CsmaP__adjustSquelch__runTask(void );






static inline void CC1000CsmaP__RssiNoiseFloor__readDone(error_t result, uint16_t data);
#line 518
static inline uint16_t CC1000CsmaP__CsmaBackoff__default__initial(message_t *m);




static inline uint16_t CC1000CsmaP__CsmaBackoff__default__congestion(message_t *m);






static uint16_t CC1000CsmaP__validateSleepInterval(uint16_t sleepIntervalMs);
#line 554
static inline void CC1000CsmaP__LowPowerListening__setLocalWakeupInterval(uint16_t s);







static void CC1000CsmaP__LowPowerListening__setRemoteWakeupInterval(message_t *msg, uint16_t sleepIntervalMs);
#line 577
static inline void CC1000CsmaP__setPreambleLength(message_t * msg);
# 76 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static am_addr_t CC1000SendReceiveP__amAddress(void );
# 74 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000Spi.nc"
static void CC1000SendReceiveP__HplCC1000Spi__initSlave(void );
#line 69
static void CC1000SendReceiveP__HplCC1000Spi__disableIntr(void );
#line 45
static void CC1000SendReceiveP__HplCC1000Spi__writeByte(uint8_t data);
#line 64
static void CC1000SendReceiveP__HplCC1000Spi__enableIntr(void );
#line 79
static void CC1000SendReceiveP__HplCC1000Spi__txMode(void );




static void CC1000SendReceiveP__HplCC1000Spi__rxMode(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void CC1000SendReceiveP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC1000SendReceiveP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 46 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Squelch.nc"
static uint16_t CC1000SendReceiveP__CC1000Squelch__get(void );
# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static error_t CC1000SendReceiveP__RssiRx__read(void );
# 50 "/opt/tinyos-2.1.1/tos/lib/timer/LocalTime.nc"
static uint32_t CC1000SendReceiveP__LocalTime32khz__get(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t CC1000SendReceiveP__signalPacketSent__postTask(void );
# 73 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
static void CC1000SendReceiveP__CC1000Control__txMode(void );
#line 136
static bool CC1000SendReceiveP__CC1000Control__getLOStatus(void );
#line 78
static void CC1000SendReceiveP__CC1000Control__rxMode(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t CC1000SendReceiveP__signalPacketReceived__postTask(void );
# 25 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
static void CC1000SendReceiveP__ByteRadio__rts(message_t * msg);
#line 95
static void CC1000SendReceiveP__ByteRadio__rxDone(void );
#line 74
static void CC1000SendReceiveP__ByteRadio__idleByte(bool preamble);
#line 44
static void CC1000SendReceiveP__ByteRadio__sendDone(void );
#line 90
static void CC1000SendReceiveP__ByteRadio__rx(void );
# 406 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
enum CC1000SendReceiveP____nesc_unnamed4356 {
#line 406
  CC1000SendReceiveP__signalPacketSent = 15U
};
#line 406
typedef int CC1000SendReceiveP____nesc_sillytask_signalPacketSent[CC1000SendReceiveP__signalPacketSent];
#line 583
enum CC1000SendReceiveP____nesc_unnamed4357 {
#line 583
  CC1000SendReceiveP__signalPacketReceived = 16U
};
#line 583
typedef int CC1000SendReceiveP____nesc_sillytask_signalPacketReceived[CC1000SendReceiveP__signalPacketReceived];
#line 86
static const int8_t CC1000SendReceiveP__BIT_CORRECTION[8] = { 27, 28, 30, 32, 34, 36, 38, 40 };





enum CC1000SendReceiveP____nesc_unnamed4358 {
  CC1000SendReceiveP__OFF_STATE, 

  CC1000SendReceiveP__INACTIVE_STATE, 

  CC1000SendReceiveP__LISTEN_STATE, 


  CC1000SendReceiveP__SYNC_STATE, 
  CC1000SendReceiveP__RX_STATE, 
  CC1000SendReceiveP__RECEIVED_STATE, 
  CC1000SendReceiveP__SENDING_ACK, 


  CC1000SendReceiveP__TXPREAMBLE_STATE, 
  CC1000SendReceiveP__TXSYNC_STATE, 
  CC1000SendReceiveP__TXDATA_STATE, 
  CC1000SendReceiveP__TXCRC_STATE, 
  CC1000SendReceiveP__TXFLUSH_STATE, 
  CC1000SendReceiveP__TXWAITFORACK_STATE, 
  CC1000SendReceiveP__TXREADACK_STATE, 
  CC1000SendReceiveP__TXDONE_STATE
};

enum CC1000SendReceiveP____nesc_unnamed4359 {
  CC1000SendReceiveP__SYNC_BYTE1 = 0x33, 
  CC1000SendReceiveP__SYNC_BYTE2 = 0xcc, 
  CC1000SendReceiveP__SYNC_WORD = (CC1000SendReceiveP__SYNC_BYTE1 << 8) | CC1000SendReceiveP__SYNC_BYTE2, 
  CC1000SendReceiveP__ACK_BYTE1 = 0xba, 
  CC1000SendReceiveP__ACK_BYTE2 = 0x83, 
  CC1000SendReceiveP__ACK_WORD = (CC1000SendReceiveP__ACK_BYTE1 << 8) | CC1000SendReceiveP__ACK_BYTE2, 
  CC1000SendReceiveP__ACK_LENGTH = 16, 
  CC1000SendReceiveP__MAX_ACK_WAIT = 18
};

uint8_t CC1000SendReceiveP__radioState;





#line 128
struct CC1000SendReceiveP____nesc_unnamed4360 {
  uint8_t ack : 1;
  uint8_t txBusy : 1;
  uint8_t invert : 1;
  uint8_t rxBitOffset : 3;
} CC1000SendReceiveP__f;
uint16_t CC1000SendReceiveP__count;
uint16_t CC1000SendReceiveP__runningCrc;

uint16_t CC1000SendReceiveP__rxShiftBuf;
message_t CC1000SendReceiveP__rxBuf;
message_t * CC1000SendReceiveP__rxBufPtr = &CC1000SendReceiveP__rxBuf;

uint16_t CC1000SendReceiveP__preambleLength;
message_t * CC1000SendReceiveP__txBufPtr;
uint8_t CC1000SendReceiveP__nextTxByte;

const_uint8_t CC1000SendReceiveP__ackCode[5] = { 0xab, CC1000SendReceiveP__ACK_BYTE1, CC1000SendReceiveP__ACK_BYTE2, 0xaa, 0xaa };



static inline cc1000_header_t * CC1000SendReceiveP__getHeader(message_t * amsg);



static inline cc1000_footer_t *CC1000SendReceiveP__getFooter(message_t * amsg);



static inline cc1000_metadata_t * CC1000SendReceiveP__getMetadata(message_t * amsg);










static inline void CC1000SendReceiveP__enterInactiveState(void );



static inline void CC1000SendReceiveP__enterListenState(void );




static inline void CC1000SendReceiveP__enterSyncState(void );





static inline void CC1000SendReceiveP__enterRxState(void );







static inline void CC1000SendReceiveP__enterReceivedState(void );



static inline void CC1000SendReceiveP__enterAckState(void );




static inline void CC1000SendReceiveP__enterTxPreambleState(void );






static inline void CC1000SendReceiveP__enterTxSyncState(void );



static inline void CC1000SendReceiveP__enterTxDataState(void );







static inline void CC1000SendReceiveP__enterTxCrcState(void );



static inline void CC1000SendReceiveP__enterTxFlushState(void );




static inline void CC1000SendReceiveP__enterTxWaitForAckState(void );




static inline void CC1000SendReceiveP__enterTxReadAckState(void );





static inline void CC1000SendReceiveP__enterTxDoneState(void );



static inline error_t CC1000SendReceiveP__Init__init(void );





static inline error_t CC1000SendReceiveP__StdControl__start(void );
#line 267
static inline error_t CC1000SendReceiveP__Send__send(message_t *msg, uint8_t len);
#line 289
static inline void CC1000SendReceiveP__ByteRadio__cts(void );
#line 302
static inline void CC1000SendReceiveP__sendNextByte(void );




static inline void CC1000SendReceiveP__txPreamble(void );








static inline void CC1000SendReceiveP__txSync(void );





static inline void CC1000SendReceiveP__txData(void );
#line 350
static inline void CC1000SendReceiveP__txCrc(void );





static inline void CC1000SendReceiveP__txFlush(void );
#line 369
static inline void CC1000SendReceiveP__txWaitForAck(void );










static inline void CC1000SendReceiveP__txReadAck(uint8_t in);
#line 406
static inline void CC1000SendReceiveP__signalPacketSent__runTask(void );
#line 418
static inline void CC1000SendReceiveP__txDone(void );







static inline void CC1000SendReceiveP__packetReceived(void );
static void CC1000SendReceiveP__packetReceiveDone(void );

static void CC1000SendReceiveP__ByteRadio__listen(void );






static inline void CC1000SendReceiveP__ByteRadio__off(void );




static inline void CC1000SendReceiveP__listenData(uint8_t in);
#line 457
static inline void CC1000SendReceiveP__syncData(uint8_t in);
#line 511
static inline void CC1000SendReceiveP__RssiRx__readDone(error_t result, uint16_t data);








static inline void CC1000SendReceiveP__rxData(uint8_t in);
#line 552
static inline void CC1000SendReceiveP__packetReceived(void );
#line 572
static inline void CC1000SendReceiveP__ackData(uint8_t in);










static inline void CC1000SendReceiveP__signalPacketReceived__runTask(void );
#line 605
static void CC1000SendReceiveP__packetReceiveDone(void );
#line 622
static inline void CC1000SendReceiveP__HplCC1000Spi__dataReady(uint8_t data);
#line 648
static inline void CC1000SendReceiveP__ByteRadio__setPreambleLength(uint16_t bytes);







static inline message_t *CC1000SendReceiveP__ByteRadio__getTxMessage(void );



static inline bool CC1000SendReceiveP__ByteRadio__syncing(void );
#line 672
static inline uint8_t CC1000SendReceiveP__Packet__payloadLength(message_t *msg);




static inline void CC1000SendReceiveP__Packet__setPayloadLength(message_t *msg, uint8_t len);







static inline void *CC1000SendReceiveP__Packet__getPayload(message_t *msg, uint8_t len);
#line 735
static inline void CC1000SendReceiveP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value);
#line 765
static inline bool CC1000SendReceiveP__PacketTimeSyncOffset__isSet(message_t *msg);




static uint8_t CC1000SendReceiveP__PacketTimeSyncOffset__get(message_t *msg);
# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static error_t CC1000RssiP__ActualRssi__read(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t CC1000RssiP__Resource__release(void );
#line 87
static error_t CC1000RssiP__Resource__immediateRequest(void );
#line 78
static error_t CC1000RssiP__Resource__request(void );
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static void CC1000RssiP__Rssi__readDone(
# 47 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000RssiP.nc"
uint8_t arg_0x409e6da0, 
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
error_t result, CC1000RssiP__Rssi__val_t val);
# 57 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000RssiP.nc"
enum CC1000RssiP____nesc_unnamed4361 {
  CC1000RssiP__IDLE = 4U, 
  CC1000RssiP__CANCELLED = 5U
};


uint8_t CC1000RssiP__currentOp = CC1000RssiP__IDLE;
uint8_t CC1000RssiP__nextOp;

static inline void CC1000RssiP__cancel(void );




static inline void CC1000RssiP__Resource__granted(void );



static error_t CC1000RssiP__Rssi__read(uint8_t reason);
#line 89
static inline void CC1000RssiP__startNextOp(void );










static inline void CC1000RssiP__ActualRssi__readDone(error_t result, uint16_t data);








static inline void CC1000RssiP__Rssi__default__readDone(uint8_t reason, error_t result, uint16_t data);
# 49 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SquelchP.nc"
uint16_t CC1000SquelchP__clearThreshold = CC1K_SquelchInit;
uint16_t CC1000SquelchP__squelchTable[CC1K_SquelchTableSize];
uint8_t CC1000SquelchP__squelchIndex;
#line 51
uint8_t CC1000SquelchP__squelchCount;

static inline error_t CC1000SquelchP__Init__init(void );








static inline void CC1000SquelchP__CC1000Squelch__adjust(uint16_t data);
#line 91
static inline uint16_t CC1000SquelchP__CC1000Squelch__get(void );



static inline bool CC1000SquelchP__CC1000Squelch__settled(void );
# 55 "/opt/tinyos-2.1.1/tos/lib/timer/BusyWait.nc"
static void CC1000ControlP__BusyWait__wait(CC1000ControlP__BusyWait__size_type dt);
# 52 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000.nc"
static void CC1000ControlP__CC__init(void );
#line 66
static uint8_t CC1000ControlP__CC__read(uint8_t addr);
#line 59
static void CC1000ControlP__CC__write(uint8_t addr, uint8_t data);
# 52 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ControlP.nc"
uint8_t CC1000ControlP__txCurrent;
#line 52
uint8_t CC1000ControlP__rxCurrent;
#line 52
uint8_t CC1000ControlP__power;

enum CC1000ControlP____nesc_unnamed4362 {
  CC1000ControlP__IF = 150000, 
  CC1000ControlP__FREQ_MIN = 4194304, 
  CC1000ControlP__FREQ_MAX = 16751615
};
#line 90
static void CC1000ControlP__calibrateNow(void );
#line 103
static inline void CC1000ControlP__calibrate(void );
#line 246
static inline void CC1000ControlP__CC1000Control__init(void );
#line 287
static inline void CC1000ControlP__CC1000Control__tunePreset(uint8_t freq);
#line 311
static void CC1000ControlP__CC1000Control__txMode(void );
#line 325
static void CC1000ControlP__CC1000Control__rxMode(void );








static inline void CC1000ControlP__CC1000Control__coreOn(void );









static inline void CC1000ControlP__CC1000Control__biasOn(void );








static void CC1000ControlP__CC1000Control__off(void );
#line 365
static inline void CC1000ControlP__CC1000Control__setRFPower(uint8_t newPower);
#line 382
static inline bool CC1000ControlP__CC1000Control__getLOStatus(void );
# 110 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 72 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void );
#line 73
static void Atm128AdcP__HplAtm128Adc__enableAdc(void );
#line 49
static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 141
static bool Atm128AdcP__HplAtm128Adc__cancel(void );
#line 77
static void Atm128AdcP__HplAtm128Adc__disableAdc(void );








static void Atm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 60
static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void );
# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 78
struct Atm128AdcP____nesc_unnamed4363 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP__f;
#line 82
#line 78
struct Atm128AdcP____nesc_unnamed4363 



Atm128AdcP__nextF;

static inline error_t Atm128AdcP__Init__init(void );
#line 104
static inline error_t Atm128AdcP__AsyncStdControl__start(void );




static inline error_t Atm128AdcP__AsyncStdControl__stop(void );









static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
#line 184
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 208
static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 242
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 147 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP__McuPowerState__update(void );
# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );


static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );


static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );



static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x);
#line 69
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );



static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );




static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 99
void __vector_21(void ) __attribute((signal))   ;








static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
# 39 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4364 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 87
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40aa9da8);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40aa9da8);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40acc1b8);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40acc1b8);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x40aa9380);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4365 {
#line 75
  ArbiterP__0__grantedTask = 17U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4366 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4367 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4368 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 90
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 108
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 130
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 187
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 199
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);









static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 59 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40b030c8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40b02088, 
# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40b015c0);
# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getChannel(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40b015c0);
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getPrescaler(
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x40b015c0);
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t AdcP__acquiredData__postTask(void );
# 103 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
enum AdcP____nesc_unnamed4369 {
#line 103
  AdcP__acquiredData = 18U
};
#line 103
typedef int AdcP____nesc_sillytask_acquiredData[AdcP__acquiredData];
#line 57
enum AdcP____nesc_unnamed4370 {
  AdcP__IDLE, 
  AdcP__ACQUIRE_DATA, 
  AdcP__ACQUIRE_DATA_NOW
};




uint8_t AdcP__state;
uint8_t AdcP__client;
uint16_t AdcP__val;

static inline uint8_t AdcP__channel(void );



static inline uint8_t AdcP__refVoltage(void );



static inline uint8_t AdcP__prescaler(void );



static void AdcP__sample(void );



static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient);
#line 99
static inline error_t AdcP__ReadNow__read(uint8_t c);



static inline void AdcP__acquiredData__runTask(void );




static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
#line 137
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c);




static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d);
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(
# 24 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40b100c8, 
# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(
# 27 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x40b0e010);
#line 39
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);







static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);
# 41 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 58
static uint32_t RandomMlcgC__Random__rand32(void );
#line 78
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 37
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4371 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer__overflow(void );
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void );
#line 76
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x);
#line 94
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 122
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void );


static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void );
#line 155
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
#line 178
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 198
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 63 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4372 {
#line 63
  AlarmToTimerC__0__fired = 19U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40beb9f0);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4373 {
#line 60
  VirtualizeTimerC__0__updateFromTimer = 20U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4374 {

  VirtualizeTimerC__0__NUM_TIMERS = 3, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4375 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);









static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 51 "/opt/tinyos-2.1.1/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;
#line 95
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 44 "/opt/tinyos-2.1.1/tos/platforms/mica/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__Counter__size_type /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__Counter__get(void );
# 42 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__LocalTime__get(void );




static inline void /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__Counter__overflow(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__fired(void );
# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t);
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__fired(void );
#line 49
static void HplAtm128Timer1P__CompareC__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer1P__Timer__overflow(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void );


static inline void HplAtm128Timer1P__Timer__set(uint16_t t);








static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x);
#line 131
static inline void HplAtm128Timer1P__Timer__start(void );
#line 144
static inline bool HplAtm128Timer1P__Timer__test(void );
#line 194
static inline void HplAtm128Timer1P__CompareA__default__fired(void );
void __vector_12(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareB__default__fired(void );
void __vector_13(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__CompareC__default__fired(void );
void __vector_24(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P__Capture__default__captured(uint16_t time);
void __vector_11(void ) __attribute((interrupt))   ;



void __vector_14(void ) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale);
#line 58
static void /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__start(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__1__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__overflow(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__overflow(void );
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__test(void );
#line 52
static /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__get(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__1__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__overflow(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform32*/TransformCounterC__1__Counter__overflow(void );
# 56 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC__1__upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC__1__m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC__1____nesc_unnamed4376 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__1__from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__1__from_size_type ) + 0, 



  TransformCounterC__1__OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC__1__upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform32*/TransformCounterC__1__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__1__Counter__get(void );
#line 122
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__size_type /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__get(void );
# 42 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__LocalTime__get(void );




static inline void /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__overflow(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
# 6 "/opt/tinyos-2.1.1/tos/interfaces/SystemLowPowerListening.nc"
static uint16_t /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SystemLowPowerListening__getDefaultRemoteWakeupInterval(void );
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 65 "/opt/tinyos-2.1.1/tos/interfaces/LowPowerListening.nc"
static void /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__Lpl__setRemoteWakeupInterval(
#line 62
message_t * msg, 


uint16_t intervalMs);
# 13 "/opt/tinyos-2.1.1/tos/system/LplAMSenderP.nc"
static inline error_t /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len);





static inline void /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__sendDone(message_t *msg, error_t error);


static inline void */*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__getPayload(message_t *msg, uint8_t len);
# 10 "/opt/tinyos-2.1.1/tos/system/SystemLowPowerListeningP.nc"
uint16_t SystemLowPowerListeningP__remoteWakeup = 0;





static inline uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDefaultRemoteWakeupInterval(void );
# 86 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 86
{
   __asm volatile ("cli");}

#line 103
#line 102
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 112
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 70 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__writeByte(uint8_t data)
#line 70
{
  /* atomic removed: atomic calls only */
#line 71
  HplCC1000SpiP__outgoingByte = data;
}

# 45 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__writeByte(uint8_t data){
#line 45
  HplCC1000SpiP__HplCC1000Spi__writeByte(data);
#line 45
}
#line 45
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 2);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__SpiMosi__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput();
#line 33
}
#line 33
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__SpiMiso__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 33
}
#line 33
# 110 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__rxMode(void )
#line 110
{
  HplCC1000SpiP__SpiMiso__makeInput();
  HplCC1000SpiP__SpiMosi__makeInput();
}

# 84 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__rxMode(void ){
#line 84
  HplCC1000SpiP__HplCC1000Spi__rxMode();
#line 84
}
#line 84
# 78 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000SendReceiveP__CC1000Control__rxMode(void ){
#line 78
  CC1000ControlP__CC1000Control__rxMode();
#line 78
}
#line 78
# 572 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__ackData(uint8_t in)
#line 572
{
  if (++CC1000SendReceiveP__count >= CC1000SendReceiveP__ACK_LENGTH) 
    {
      CC1000SendReceiveP__CC1000Control__rxMode();
      CC1000SendReceiveP__HplCC1000Spi__rxMode();
      CC1000SendReceiveP__packetReceiveDone();
    }
  else {
#line 579
    if (CC1000SendReceiveP__count >= CC1000SendReceiveP__ACK_LENGTH - sizeof CC1000SendReceiveP__ackCode) {
      CC1000SendReceiveP__HplCC1000Spi__writeByte(__extension__ ({
#line 580
        uint16_t __addr16 = (uint16_t )(uint16_t )&CC1000SendReceiveP__ackCode[CC1000SendReceiveP__count + sizeof CC1000SendReceiveP__ackCode - CC1000SendReceiveP__ACK_LENGTH];
#line 580
        uint8_t __result;

#line 580
         __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
      }
      ));
      }
    }
}

# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

#line 264
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}








static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__SpiMosi__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 3;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__SpiMiso__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeOutput();
#line 35
}
#line 35
# 105 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__txMode(void )
#line 105
{
  HplCC1000SpiP__SpiMiso__makeOutput();
  HplCC1000SpiP__SpiMosi__makeOutput();
}

# 79 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__txMode(void ){
#line 79
  HplCC1000SpiP__HplCC1000Spi__txMode();
#line 79
}
#line 79
# 73 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000SendReceiveP__CC1000Control__txMode(void ){
#line 73
  CC1000ControlP__CC1000Control__txMode();
#line 73
}
#line 73
# 195 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterAckState(void )
#line 195
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__SENDING_ACK;
  CC1000SendReceiveP__count = 0;
}

#line 76
inline static am_addr_t CC1000SendReceiveP__amAddress(void ){
#line 76
  unsigned short __nesc_result;
#line 76

#line 76
  __nesc_result = ActiveMessageAddressC__amAddress();
#line 76

#line 76
  return __nesc_result;
#line 76
}
#line 76
#line 149
static inline cc1000_header_t * CC1000SendReceiveP__getHeader(message_t * amsg)
#line 149
{
  return (cc1000_header_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->data - sizeof(cc1000_header_t ));
}

static inline cc1000_footer_t *CC1000SendReceiveP__getFooter(message_t * amsg)
#line 153
{
  return (cc1000_footer_t *)amsg->footer;
}

#line 552
static inline void CC1000SendReceiveP__packetReceived(void )
#line 552
{
  cc1000_footer_t *rxFooter = CC1000SendReceiveP__getFooter(CC1000SendReceiveP__rxBufPtr);
  cc1000_header_t *rxHeader = CC1000SendReceiveP__getHeader(CC1000SendReceiveP__rxBufPtr);


  __nesc_hton_leuint16(rxFooter->crc.data, __nesc_ntoh_leuint16(rxFooter->crc.data) == CC1000SendReceiveP__runningCrc);


  if (
#line 559
  CC1000SendReceiveP__f.ack && __nesc_ntoh_leuint16(
  rxFooter->crc.data) && __nesc_ntoh_uint16(
  rxHeader->dest.data) == CC1000SendReceiveP__amAddress()) 
    {
      CC1000SendReceiveP__enterAckState();
      CC1000SendReceiveP__CC1000Control__txMode();
      CC1000SendReceiveP__HplCC1000Spi__txMode();
      CC1000SendReceiveP__HplCC1000Spi__writeByte(0xaa);
    }
  else {
    CC1000SendReceiveP__packetReceiveDone();
    }
}

# 95 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP__ByteRadio__rxDone(void ){
#line 95
  CC1000CsmaP__ByteRadio__rxDone();
#line 95
}
#line 95
# 172 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterListenState(void )
#line 172
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__LISTEN_STATE;
  CC1000SendReceiveP__count = 0;
}

#line 520
static inline void CC1000SendReceiveP__rxData(uint8_t in)
#line 520
{
  uint8_t nextByte;
  cc1000_header_t *rxHeader = CC1000SendReceiveP__getHeader(CC1000SendReceiveP__rxBufPtr);
  uint8_t rxLength = __nesc_ntoh_uint8(rxHeader->length.data);


  if (rxLength > 28) 
    {

      CC1000SendReceiveP__enterListenState();
      CC1000SendReceiveP__ByteRadio__rxDone();
      return;
    }

  CC1000SendReceiveP__rxShiftBuf = (CC1000SendReceiveP__rxShiftBuf << 8) | in;
  nextByte = CC1000SendReceiveP__rxShiftBuf >> CC1000SendReceiveP__f.rxBitOffset;
  ((uint8_t * )CC1000SendReceiveP__rxBufPtr)[CC1000SendReceiveP__count++] = nextByte;


  rxLength += (unsigned short )& ((message_t *)0)->data;
  if (CC1000SendReceiveP__count <= rxLength) {
    CC1000SendReceiveP__runningCrc = crcByte(CC1000SendReceiveP__runningCrc, nextByte);
    }

  if (CC1000SendReceiveP__count == rxLength) {
      CC1000SendReceiveP__count = (unsigned short )& ((message_t *)0)->footer + (unsigned short )& ((cc1000_footer_t *)0)->crc;
    }

  if (CC1000SendReceiveP__count == (unsigned short )& ((message_t *)0)->footer + sizeof(cc1000_footer_t )) {
    CC1000SendReceiveP__packetReceived();
    }
}

# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
inline static error_t CC1000SendReceiveP__RssiRx__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC1000RssiP__Rssi__read(0U);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 301 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 301
{
  uint8_t *base = target;

#line 303
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

# 157 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline cc1000_metadata_t * CC1000SendReceiveP__getMetadata(message_t * amsg)
#line 157
{
  return (cc1000_metadata_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->footer + sizeof(cc1000_footer_t ));
}

#line 735
static inline void CC1000SendReceiveP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC1000SendReceiveP__getMetadata(msg)->timestamp.data, value);
}

# 66 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP__cancel(void )
#line 66
{
  if (CC1000RssiP__currentOp != CC1000RssiP__IDLE) {
    CC1000RssiP__currentOp = CC1000RssiP__CANCELLED;
    }
}

# 80 "CC1000CsmaP.nc"
inline static void CC1000CsmaP__cancelRssi(void ){
#line 80
  CC1000RssiP__cancel();
#line 80
}
#line 80
#line 151
static inline void CC1000CsmaP__enterRxState(void )
#line 151
{
  CC1000CsmaP__cancelRssi();
  CC1000CsmaP__radioState = CC1000CsmaP__RX_STATE;
}

#line 465
static inline void CC1000CsmaP__ByteRadio__rx(void )
#line 465
{
  CC1000CsmaP__enterRxState();
  printf("%lu | RX_STATE\n", CC1000CsmaP__getLocalTime());
  printfflush();
}

# 90 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP__ByteRadio__rx(void ){
#line 90
  CC1000CsmaP__ByteRadio__rx();
#line 90
}
#line 90
# 240 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

# 183 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterRxState(void )
#line 183
{
  cc1000_header_t *header = CC1000SendReceiveP__getHeader(CC1000SendReceiveP__rxBufPtr);

#line 185
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__RX_STATE;
  __nesc_hton_uint8(header->length.data, sizeof  CC1000SendReceiveP__rxBufPtr->data);
  CC1000SendReceiveP__count = sizeof(message_header_t ) - sizeof(cc1000_header_t );
  CC1000SendReceiveP__runningCrc = 0;
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__size_type /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__get(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = /*Counter32khz32C.Transform32*/TransformCounterC__1__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 42 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__LocalTime__get(void )
{
  return /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__get();
}

# 50 "/opt/tinyos-2.1.1/tos/lib/timer/LocalTime.nc"
inline static uint32_t CC1000SendReceiveP__LocalTime32khz__get(void ){
#line 50
  unsigned long __nesc_result;
#line 50

#line 50
  __nesc_result = /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__LocalTime__get();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 457 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__syncData(uint8_t in)
#line 457
{








  if (in == 0xaa || in == 0x55) {




    CC1000SendReceiveP__rxShiftBuf = in << 8;
    }
  else {
#line 472
    if (CC1000SendReceiveP__count++ == 0) {
      CC1000SendReceiveP__rxShiftBuf |= in;
      }
    else {
#line 474
      if (CC1000SendReceiveP__count <= 6) 
        {

          uint32_t time;
          uint16_t tmp;
          uint8_t i;

          time = CC1000SendReceiveP__LocalTime32khz__get();


          tmp = CC1000SendReceiveP__rxShiftBuf;
          CC1000SendReceiveP__rxShiftBuf = (CC1000SendReceiveP__rxShiftBuf << 8) | in;

          for (i = 0; i < 8; i++) 
            {
              tmp <<= 1;
              if (in & 0x80) {
                tmp |= 0x1;
                }
#line 492
              in <<= 1;

              if (tmp == CC1000SendReceiveP__SYNC_WORD) 
                {
                  CC1000SendReceiveP__enterRxState();
                  CC1000SendReceiveP__ByteRadio__rx();
                  CC1000SendReceiveP__f.rxBitOffset = 7 - i;

                  time -= CC1000SendReceiveP__BIT_CORRECTION[CC1000SendReceiveP__f.rxBitOffset];
                  CC1000SendReceiveP__PacketTimeStamp32khz__set(CC1000SendReceiveP__rxBufPtr, time);

                  CC1000SendReceiveP__RssiRx__read();
                }
            }
        }
      else {
        CC1000SendReceiveP__enterListenState();
        }
      }
    }
}

# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP__RssiCheckChannel__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC1000RssiP__Rssi__read(2U);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 656 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline message_t *CC1000SendReceiveP__ByteRadio__getTxMessage(void )
#line 656
{
  return CC1000SendReceiveP__txBufPtr;
}

# 39 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
inline static message_t *CC1000CsmaP__ByteRadio__getTxMessage(void ){
#line 39
  nx_struct message_t *__nesc_result;
#line 39

#line 39
  __nesc_result = CC1000SendReceiveP__ByteRadio__getTxMessage();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 78 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint16_t CC1000CsmaP__Random__rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 523 "CC1000CsmaP.nc"
static inline uint16_t CC1000CsmaP__CsmaBackoff__default__congestion(message_t *m)
#line 523
{
  return (CC1000CsmaP__Random__rand16() & 0xF) + 1;
}

# 45 "/opt/tinyos-2.1.1/tos/interfaces/CsmaBackoff.nc"
inline static uint16_t CC1000CsmaP__CsmaBackoff__congestion(message_t * m){
#line 45
  unsigned short __nesc_result;
#line 45

#line 45
  __nesc_result = CC1000CsmaP__CsmaBackoff__default__congestion(m);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 416 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__congestion(void )
#line 416
{
  CC1000CsmaP__macDelay = CC1000CsmaP__CsmaBackoff__congestion(CC1000CsmaP__ByteRadio__getTxMessage());
}

static inline void CC1000CsmaP__ByteRadio__idleByte(bool preamble)
#line 420
{
  if (CC1000CsmaP__f.txPending) 
    {
      if (! CC1000CsmaP__f.ccaOff && preamble) {
        CC1000CsmaP__congestion();
        }
      else {
#line 425
        if (CC1000CsmaP__macDelay && ! --CC1000CsmaP__macDelay) 
          {
            CC1000CsmaP__cancelRssi();
            CC1000CsmaP__count = 0;
            CC1000CsmaP__RssiCheckChannel__read();
          }
        }
    }
}

# 74 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP__ByteRadio__idleByte(bool preamble){
#line 74
  CC1000CsmaP__ByteRadio__idleByte(preamble);
#line 74
}
#line 74
# 177 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterSyncState(void )
#line 177
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__SYNC_STATE;
  CC1000SendReceiveP__count = 0;
  CC1000SendReceiveP__rxShiftBuf = 0;
}

#line 441
static inline void CC1000SendReceiveP__listenData(uint8_t in)
#line 441
{
  bool preamble = in == 0xaa || in == 0x55;


  if (preamble) 
    {
      CC1000SendReceiveP__count++;
      if (CC1000SendReceiveP__count > CC1K_ValidPrecursor) {
        CC1000SendReceiveP__enterSyncState();
        }
    }
  else {
#line 452
    CC1000SendReceiveP__count = 0;
    }
  CC1000SendReceiveP__ByteRadio__idleByte(preamble);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP__setWakeupTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000CsmaP__setWakeupTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 126 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__enterIdleState(void )
#line 126
{
  CC1000CsmaP__cancelRssi();
  CC1000CsmaP__radioState = CC1000CsmaP__IDLE_STATE;
}

static inline void CC1000CsmaP__enterIdleStateSetWakeup(void )
#line 131
{
  CC1000CsmaP__enterIdleState();
  CC1000CsmaP__setWakeupTask__postTask();
}

#line 409
static inline void CC1000CsmaP__ByteRadio__sendDone(void )
#line 409
{
  CC1000CsmaP__f.txPending = FALSE;
  CC1000CsmaP__enterIdleStateSetWakeup();
  printf("%lu | IDLE_STATE\n", CC1000CsmaP__getLocalTime());
  printfflush();
}

# 44 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP__ByteRadio__sendDone(void ){
#line 44
  CC1000CsmaP__ByteRadio__sendDone();
#line 44
}
#line 44
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000SendReceiveP__signalPacketSent__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000SendReceiveP__signalPacketSent);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 418 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__txDone(void )
#line 418
{
  CC1000SendReceiveP__signalPacketSent__postTask();
  CC1000SendReceiveP__ByteRadio__sendDone();
}

#line 239
static inline void CC1000SendReceiveP__enterTxDoneState(void )
#line 239
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXDONE_STATE;
}

#line 302
static inline void CC1000SendReceiveP__sendNextByte(void )
#line 302
{
  CC1000SendReceiveP__HplCC1000Spi__writeByte(CC1000SendReceiveP__nextTxByte);
  CC1000SendReceiveP__count++;
}

#line 380
static inline void CC1000SendReceiveP__txReadAck(uint8_t in)
#line 380
{
  unsigned char *__nesc_temp44;
  unsigned char *__nesc_temp43;
#line 381
  uint8_t i;

  CC1000SendReceiveP__sendNextByte();

  for (i = 0; i < 8; i++) 
    {
      CC1000SendReceiveP__rxShiftBuf <<= 1;
      if (in & 0x80) {
        CC1000SendReceiveP__rxShiftBuf |= 0x1;
        }
#line 390
      in <<= 1;

      if (CC1000SendReceiveP__rxShiftBuf == CC1000SendReceiveP__ACK_WORD) 
        {
          (__nesc_temp43 = CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__txBufPtr)->metadataBits.data, __nesc_hton_uint8(__nesc_temp43, __nesc_ntoh_uint8(__nesc_temp43) | CC1000_ACK_BIT));
          CC1000SendReceiveP__enterTxDoneState();
          return;
        }
    }
  if (CC1000SendReceiveP__count >= CC1000SendReceiveP__MAX_ACK_WAIT) 
    {
      (__nesc_temp44 = CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__txBufPtr)->metadataBits.data, __nesc_hton_uint8(__nesc_temp44, __nesc_ntoh_uint8(__nesc_temp44) & ~CC1000_ACK_BIT));
      CC1000SendReceiveP__enterTxDoneState();
    }
}

#line 233
static inline void CC1000SendReceiveP__enterTxReadAckState(void )
#line 233
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXREADACK_STATE;
  CC1000SendReceiveP__rxShiftBuf = 0;
  CC1000SendReceiveP__count = 0;
}

#line 369
static inline void CC1000SendReceiveP__txWaitForAck(void )
#line 369
{
  CC1000SendReceiveP__sendNextByte();
  if (CC1000SendReceiveP__count == 1) 
    {
      CC1000SendReceiveP__HplCC1000Spi__rxMode();
      CC1000SendReceiveP__CC1000Control__rxMode();
    }
  else {
#line 376
    if (CC1000SendReceiveP__count > 3) {
      CC1000SendReceiveP__enterTxReadAckState();
      }
    }
}

#line 228
static inline void CC1000SendReceiveP__enterTxWaitForAckState(void )
#line 228
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXWAITFORACK_STATE;
  CC1000SendReceiveP__count = 0;
}

#line 356
static inline void CC1000SendReceiveP__txFlush(void )
#line 356
{
  CC1000SendReceiveP__sendNextByte();
  if (CC1000SendReceiveP__count > 3) {
    if (CC1000SendReceiveP__f.ack) {
      CC1000SendReceiveP__enterTxWaitForAckState();
      }
    else {
        CC1000SendReceiveP__HplCC1000Spi__rxMode();
        CC1000SendReceiveP__CC1000Control__rxMode();
        CC1000SendReceiveP__enterTxDoneState();
      }
    }
}

#line 223
static inline void CC1000SendReceiveP__enterTxFlushState(void )
#line 223
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXFLUSH_STATE;
  CC1000SendReceiveP__count = 0;
}

#line 350
static inline void CC1000SendReceiveP__txCrc(void )
#line 350
{
  CC1000SendReceiveP__sendNextByte();
  CC1000SendReceiveP__nextTxByte = CC1000SendReceiveP__runningCrc >> 8;
  CC1000SendReceiveP__enterTxFlushState();
}

# 294 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 219 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterTxCrcState(void )
#line 219
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXCRC_STATE;
}

# 257 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 257
{
#line 257
  return __nesc_ntoh_uint8(source);
}

# 765 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline bool CC1000SendReceiveP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC1000SendReceiveP__getMetadata(msg)->timesync.data);
}

#line 322
static inline void CC1000SendReceiveP__txData(void )
#line 322
{
  unsigned char *__nesc_temp42;
#line 323
  cc1000_header_t *txHeader = CC1000SendReceiveP__getHeader(CC1000SendReceiveP__txBufPtr);

#line 324
  CC1000SendReceiveP__sendNextByte();

  if (CC1000SendReceiveP__nextTxByte == CC1000SendReceiveP__SYNC_BYTE2) {

      uint32_t time32khz = CC1000SendReceiveP__LocalTime32khz__get();

#line 329
      CC1000SendReceiveP__PacketTimeStamp32khz__set(CC1000SendReceiveP__txBufPtr, time32khz);

      if (CC1000SendReceiveP__PacketTimeSyncOffset__isSet(CC1000SendReceiveP__txBufPtr)) {
          timesync_radio_t *timesync = (timesync_radio_t *)((void *)CC1000SendReceiveP__txBufPtr + CC1000SendReceiveP__PacketTimeSyncOffset__get(CC1000SendReceiveP__txBufPtr));

          (__nesc_temp42 = (*timesync).data, __nesc_hton_uint32(__nesc_temp42, __nesc_ntoh_uint32(__nesc_temp42) - time32khz));
        }
    }

  if (CC1000SendReceiveP__count < __nesc_ntoh_uint8(txHeader->length.data) + sizeof(message_header_t )) 
    {
      CC1000SendReceiveP__nextTxByte = ((uint8_t *)CC1000SendReceiveP__txBufPtr)[CC1000SendReceiveP__count];
      CC1000SendReceiveP__runningCrc = crcByte(CC1000SendReceiveP__runningCrc, CC1000SendReceiveP__nextTxByte);
    }
  else 
    {
      CC1000SendReceiveP__nextTxByte = CC1000SendReceiveP__runningCrc;
      CC1000SendReceiveP__enterTxCrcState();
    }
}

#line 211
static inline void CC1000SendReceiveP__enterTxDataState(void )
#line 211
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXDATA_STATE;



  CC1000SendReceiveP__count = sizeof(message_header_t ) - sizeof(cc1000_header_t ) - 1;
}

#line 316
static inline void CC1000SendReceiveP__txSync(void )
#line 316
{
  CC1000SendReceiveP__sendNextByte();
  CC1000SendReceiveP__nextTxByte = CC1000SendReceiveP__SYNC_BYTE2;
  CC1000SendReceiveP__enterTxDataState();
}

#line 207
static inline void CC1000SendReceiveP__enterTxSyncState(void )
#line 207
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXSYNC_STATE;
}

#line 307
static inline void CC1000SendReceiveP__txPreamble(void )
#line 307
{
  CC1000SendReceiveP__sendNextByte();
  if (CC1000SendReceiveP__count >= CC1000SendReceiveP__preambleLength) 
    {
      CC1000SendReceiveP__nextTxByte = CC1000SendReceiveP__SYNC_BYTE1;
      CC1000SendReceiveP__enterTxSyncState();
    }
}

#line 622
static inline void CC1000SendReceiveP__HplCC1000Spi__dataReady(uint8_t data)
#line 622
{
  if (CC1000SendReceiveP__f.invert) {
    data = ~data;
    }
  switch (CC1000SendReceiveP__radioState) 
    {
      default: break;
      case CC1000SendReceiveP__TXPREAMBLE_STATE: CC1000SendReceiveP__txPreamble();
#line 629
      break;
      case CC1000SendReceiveP__TXSYNC_STATE: CC1000SendReceiveP__txSync();
#line 630
      break;
      case CC1000SendReceiveP__TXDATA_STATE: CC1000SendReceiveP__txData();
#line 631
      break;
      case CC1000SendReceiveP__TXCRC_STATE: CC1000SendReceiveP__txCrc();
#line 632
      break;
      case CC1000SendReceiveP__TXFLUSH_STATE: CC1000SendReceiveP__txFlush();
#line 633
      break;
      case CC1000SendReceiveP__TXWAITFORACK_STATE: CC1000SendReceiveP__txWaitForAck();
#line 634
      break;
      case CC1000SendReceiveP__TXREADACK_STATE: CC1000SendReceiveP__txReadAck(data);
#line 635
      break;
      case CC1000SendReceiveP__TXDONE_STATE: CC1000SendReceiveP__txDone();
#line 636
      break;

      case CC1000SendReceiveP__LISTEN_STATE: CC1000SendReceiveP__listenData(data);
#line 638
      break;
      case CC1000SendReceiveP__SYNC_STATE: CC1000SendReceiveP__syncData(data);
#line 639
      break;
      case CC1000SendReceiveP__RX_STATE: CC1000SendReceiveP__rxData(data);
#line 640
      break;
      case CC1000SendReceiveP__SENDING_ACK: CC1000SendReceiveP__ackData(data);
#line 641
      break;
    }
}

# 92 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void HplCC1000SpiP__HplCC1000Spi__dataReady(uint8_t data){
#line 92
  CC1000SendReceiveP__HplCC1000Spi__dataReady(data);
#line 92
}
#line 92
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void )
#line 49
{
#line 49
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__1__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__get();
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 94 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void )
#line 94
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 144 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline bool HplAtm128Timer1P__Timer__test(void )
#line 144
{
  return HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag().bits.tov1;
}

# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__test(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = HplAtm128Timer1P__Timer__test();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__test();
}

# 60 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__isOverflowPending();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 86 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__Timer__get(void )
#line 47
{
#line 47
  return * (volatile uint16_t *)0x88;
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer3P__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 106 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline Atm128_ETIFR_t HplAtm128Timer3P__TimerCtrl__getInterruptFlag(void )
#line 106
{
  return * (Atm128_ETIFR_t *)& * (volatile uint8_t *)0x7C;
}

#line 139
static inline bool HplAtm128Timer3P__Timer__test(void )
#line 139
{
  return HplAtm128Timer3P__TimerCtrl__getInterruptFlag().bits.tov3;
}

# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = HplAtm128Timer3P__Timer__test();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 60 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static bool /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 69 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
static inline /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__get(void )
{
  /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type high = /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper;
      /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type low = /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__get();

#line 76
      if (/*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type high_to = high;
        /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMicro32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*CounterMicro32C.Transform32*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__Counter__size_type /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__Counter__get(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 42 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__LocalTime__get(void )
{
  return /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__Counter__get();
}

# 50 "/opt/tinyos-2.1.1/tos/lib/timer/LocalTime.nc"
inline static uint32_t CC1000CsmaP__LTime__get(void ){
#line 50
  unsigned long __nesc_result;
#line 50

#line 50
  __nesc_result = /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__LocalTime__get();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 53 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*PrintfC.QueueC*/QueueC__0__size == 0;
}

# 50 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static bool PrintfP__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void * PrintfP__Packet__getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 120 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 120
{
  return 28;
}

# 57 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void )
#line 57
{
  return /*PrintfC.QueueC*/QueueC__0__size;
}

# 58 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static uint8_t PrintfP__Queue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 69 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void )
#line 69
{
}

#line 65
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void )
#line 65
{
  return /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__head];
}

#line 85
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*PrintfC.QueueC*/QueueC__0__queue_t t = /*PrintfC.QueueC*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*PrintfC.QueueC*/QueueC__0__Queue__empty()) {
      /*PrintfC.QueueC*/QueueC__0__head++;
      if (/*PrintfC.QueueC*/QueueC__0__head == 250) {
#line 90
        /*PrintfC.QueueC*/QueueC__0__head = 0;
        }
#line 91
      /*PrintfC.QueueC*/QueueC__0__size--;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static PrintfP__Queue__t  PrintfP__Queue__dequeue(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 269 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 49 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 49
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 147
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 147
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 149
  __nesc_hton_uint16(header->dest.data, addr);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 166 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
#line 166
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 168
  __nesc_hton_uint8(header->type.data, type);
}

# 151 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 151
}
#line 151
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x407c0490, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x407c0490, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
#line 136
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 116 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 116
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.data, len);
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 522 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 522
{
  bool not_busy = FALSE;

#line 524
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 524
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 530
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 51 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 43
{
  return upperLen + sizeof(serial_header_t );
}

# 350 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 351
{
  return 0;
}

# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x40621b10, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x40621b10) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x40621b10, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 40
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 347 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 347
{
  return 0;
}

# 15 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x40621b10){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x40621b10) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x40621b10);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 100 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 100
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 108
            ESIZE;

            {
#line 108
              __nesc_atomic_end(__nesc_atomic); 
#line 108
              return __nesc_temp;
            }
          }
        }
#line 111
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 213 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x40acc1b8){
#line 49
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x40acc1b8);
#line 49
}
#line 49
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 110 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 110
{
}

# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP__McuPowerState__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 69 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void )
#line 69
{
  * (volatile uint8_t *)(0x06 + 0x20) |= 1 << 7;
  HplAtm128AdcP__McuPowerState__update();
}

# 73 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__enableAdc(void ){
#line 73
  HplAtm128AdcP__HplAtm128Adc__enableAdc();
#line 73
}
#line 73
# 104 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__start(void )
#line 104
{
  /* atomic removed: atomic calls only */
#line 105
  Atm128AdcP__HplAtm128Adc__enableAdc();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = Atm128AdcP__AsyncStdControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 64 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void )
#line 64
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 81 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested();
#line 81
}
#line 81
# 203 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 203
{
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x40aa9da8){
#line 51
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x40aa9da8);
#line 51
}
#line 51
# 90 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 90
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 92
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 97
        FAIL;

#line 97
        return __nesc_temp;
      }
  }
#line 99
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == id) {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 104
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
  return FAIL;
}

# 87 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP__Resource__immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__HAL_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x)
#line 51
{
#line 51
  union __nesc_unnamed4377 {
#line 51
    Atm128Adcsra_t f;
#line 51
    uint8_t t;
  } 
#line 51
  c = { .f = x };

#line 51
  return c.t;
}




static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x)
#line 57
{
  * (volatile uint8_t *)(0x06 + 0x20) = HplAtm128AdcP__Adcsra2int(x);
}

# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra){
#line 60
  HplAtm128AdcP__HplAtm128Adc__setAdcsra(adcsra);
#line 60
}
#line 60
# 103 "/opt/tinyos-2.1.1/tos/platforms/mica/MeasureClockC.nc"
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void )
#line 103
{

  if (MeasureClockC__cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 107
  if (MeasureClockC__cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 109
  if (MeasureClockC__cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 111
  if (MeasureClockC__cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 113
  if (MeasureClockC__cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 115
  if (MeasureClockC__cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 117
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = MeasureClockC__Atm128Calibrate__adcPrescaler();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x)
#line 50
{
#line 50
  union __nesc_unnamed4378 {
#line 50
    Atm128Admux_t f;
#line 50
    uint8_t t;
  } 
#line 50
  c = { .f = x };

#line 50
  return c.t;
}


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x)
#line 54
{
  * (volatile uint8_t *)(0x07 + 0x20) = HplAtm128AdcP__Admux2int(x);
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux){
#line 49
  HplAtm128AdcP__HplAtm128Adc__setAdmux(admux);
#line 49
}
#line 49
# 119 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 119
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void )
#line 40
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)(0x07 + 0x20);
}

# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void ){
#line 44
  struct __nesc_unnamed4251 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__getAdmux();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 184 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 184
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsr;

  admux = Atm128AdcP__HplAtm128Adc__getAdmux();
  Atm128AdcP__f.precise = Atm128AdcP__isPrecise(admux, channel, refVoltage);
  Atm128AdcP__f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;
  admux.mux = channel;
  Atm128AdcP__HplAtm128Adc__setAdmux(admux);

  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adfr = Atm128AdcP__f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP__Atm128Calibrate__adcPrescaler();
    }
#line 204
  adcsr.adps = prescaler;
  Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
}

static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 209
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP__f.multiple = FALSE;
      Atm128AdcP__getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 215
        Atm128AdcP__f.precise;

        {
#line 215
          __nesc_atomic_end(__nesc_atomic); 
#line 215
          return __nesc_temp;
        }
      }
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = Atm128AdcP__Atm128AdcSingle__getData(channel, refVoltage, leftJustify, prescaler);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 195 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P__RssiConfig__getChannel(void )
#line 195
{
  return CHANNEL_RSSI;
}

# 137 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getChannel(uint8_t arg_0x40b015c0){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  switch (arg_0x40b015c0) {
#line 25
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__ID:
#line 25
      __nesc_result = HplCC1000P__RssiConfig__getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      __nesc_result = AdcP__Atm128AdcConfig__default__getChannel(arg_0x40b015c0);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 70 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__channel(void )
#line 70
{
  return AdcP__Atm128AdcConfig__getChannel(AdcP__client);
}

# 199 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P__RssiConfig__getRefVoltage(void )
#line 199
{
  return ATM128_ADC_VREF_OFF;
}

# 141 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(uint8_t arg_0x40b015c0){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  switch (arg_0x40b015c0) {
#line 32
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__ID:
#line 32
      __nesc_result = HplCC1000P__RssiConfig__getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      __nesc_result = AdcP__Atm128AdcConfig__default__getRefVoltage(arg_0x40b015c0);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 74 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__refVoltage(void )
#line 74
{
  return AdcP__Atm128AdcConfig__getRefVoltage(AdcP__client);
}

# 203 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P__RssiConfig__getPrescaler(void )
#line 203
{
  return ATM128_ADC_PRESCALE;
}

# 145 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getPrescaler(uint8_t arg_0x40b015c0){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x40b015c0) {
#line 39
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__ID:
#line 39
      __nesc_result = HplCC1000P__RssiConfig__getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = AdcP__Atm128AdcConfig__default__getPrescaler(arg_0x40b015c0);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__prescaler(void )
#line 78
{
  return AdcP__Atm128AdcConfig__getPrescaler(AdcP__client);
}

# 59 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 59
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 87 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 87
{
  /* atomic removed: atomic calls only */
#line 88
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      EBUSY;

#line 93
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 201 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 201
{
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x40aa9da8){
#line 43
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x40aa9da8);
#line 43
}
#line 43
# 77 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 79
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 84
        /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

#line 84
        return __nesc_temp;
      }
  }
#line 86
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP__Resource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__HAL_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 91 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SquelchP.nc"
static inline uint16_t CC1000SquelchP__CC1000Squelch__get(void )
#line 91
{
  return CC1000SquelchP__clearThreshold;
}

# 46 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Squelch.nc"
inline static uint16_t CC1000SendReceiveP__CC1000Squelch__get(void ){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = CC1000SquelchP__CC1000Squelch__get();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000SendReceiveP__signalPacketReceived__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000SendReceiveP__signalPacketReceived);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 191 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterReceivedState(void )
#line 191
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__RECEIVED_STATE;
}

# 113 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 46
  SchedulerBasicP__Scheduler__init();
#line 46
}
#line 46
# 42 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 58 "/opt/tinyos-2.1.1/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 7);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__OC1C__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput();
#line 33
}
#line 33
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 1);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP__SpiSck__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeInput();
#line 33
}
#line 33
# 55 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline error_t HplCC1000SpiP__PlatformInit__init(void )
#line 55
{
  HplCC1000SpiP__SpiSck__makeInput();
  HplCC1000SpiP__OC1C__makeInput();
  HplCC1000SpiP__HplCC1000Spi__rxMode();
  return SUCCESS;
}

# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )50U |= 1 << 6;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PCLK__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )50U |= 1 << 7;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PDATA__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )50U |= 1 << 4;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PALE__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )49U |= 1 << 7;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PDATA__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )49U |= 1 << 6;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PCLK__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )49U |= 1 << 4;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PALE__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )58U &= ~(1 << 6);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__CHP_OUT__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeInput();
#line 33
}
#line 33
# 57 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline error_t HplCC1000P__PlatformInit__init(void )
#line 57
{
  HplCC1000P__CHP_OUT__makeInput();
  HplCC1000P__PALE__makeOutput();
  HplCC1000P__PCLK__makeOutput();
  HplCC1000P__PDATA__makeOutput();
  HplCC1000P__PALE__set();
  HplCC1000P__PDATA__set();
  HplCC1000P__PCLK__set();


  HplCC1000P__HplCC1000__write(CC1K_MAIN, (((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_CORE_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
  HplCC1000P__HplCC1000__write(CC1K_PA_POW, 0);
  return SUCCESS;
}

# 79 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 79
{
#line 79
  union __nesc_unnamed4379 {
#line 79
    Atm128TimerCtrlCapture_t f;
#line 79
    uint16_t t;
  } 
#line 79
  c = { .f = x };

#line 79
  return c.t;
}





static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x)
#line 86
{
  * (volatile uint8_t *)0x8A = HplAtm128Timer3P__TimerCtrlCapture2int(x);
}

#line 69
static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void )
#line 69
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)0x8A;
}

#line 59
static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s)
#line 59
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer3P__TimerCtrl__getCtrlCapture();

#line 61
  x.bits.cs = s;
  HplAtm128Timer3P__TimerCtrl__setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 95
  HplAtm128Timer3P__Timer__setScale(scale);
#line 95
}
#line 95
# 127 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__start(void )
#line 127
{
#line 127
  * (volatile uint8_t *)0x7D |= 1 << 2;
}

# 69 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void ){
#line 69
  HplAtm128Timer3P__Timer__start();
#line 69
}
#line 69
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__set(uint16_t t)
#line 50
{
#line 50
  * (volatile uint16_t *)0x88 = t;
}

# 58 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t){
#line 58
  HplAtm128Timer3P__Timer__set(t);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start();
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__Init__init(void )
#line 84
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adfr = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 81
{
#line 81
  union __nesc_unnamed4380 {
#line 81
    Atm128TimerCtrlCapture_t f;
#line 81
    uint16_t t;
  } 
#line 81
  c = { .f = x };

#line 81
  return c.t;
}





static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x)
#line 88
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P__TimerCtrlCapture2int(x);
}

#line 71
static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void )
#line 71
{
  return * (Atm128TimerCtrlCapture_t * )& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 61
static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s)
#line 61
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P__TimerCtrl__getCtrlCapture();

#line 63
  x.bits.cs = s;
  HplAtm128Timer1P__TimerCtrl__setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__setScale(uint8_t scale){
#line 95
  HplAtm128Timer1P__Timer__setScale(scale);
#line 95
}
#line 95
# 131 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__start(void )
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 69 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__start(void ){
#line 69
  HplAtm128Timer1P__Timer__start();
#line 69
}
#line 69
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__set(uint16_t t)
#line 52
{
#line 52
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 58 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__timer_size t){
#line 58
  HplAtm128Timer1P__Timer__set(t);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__1__Init__init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__setScale(4);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*InitOneP.InitOne*/Atm128TimerInitC__1__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, Atm128AdcP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 33
}
#line 33
# 23 "/opt/tinyos-2.1.1/tos/platforms/mica2/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 23
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplCC1000P__PlatformInit__init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplCC1000SpiP__PlatformInit__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.1.1/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP__power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 92 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 118
}
#line 118
# 204 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 67
}
#line 67
# 222 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 125
  unsigned long __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 89 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 44 "/opt/tinyos-2.1.1/tos/platforms/mica/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
#line 44
{

  if (dt) {
#line 71
     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 55 "/opt/tinyos-2.1.1/tos/lib/timer/BusyWait.nc"
inline static void CC1000CsmaP__BusyWait__wait(CC1000CsmaP__BusyWait__size_type dt){
#line 55
  BusyWaitMicroC__BusyWait__wait(dt);
#line 55
}
#line 55
# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP__RssiPulseCheck__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC1000RssiP__Rssi__read(3U);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 78 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP__CC1000Control__rxMode(void ){
#line 78
  CC1000ControlP__CC1000Control__rxMode();
#line 78
}
#line 78
# 59 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000.nc"
inline static void CC1000ControlP__CC__write(uint8_t addr, uint8_t data){
#line 59
  HplCC1000P__HplCC1000__write(addr, data);
#line 59
}
#line 59
# 344 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP__CC1000Control__biasOn(void )
#line 344
{
  CC1000ControlP__CC__write(CC1K_MAIN, (((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_RESET_N));
}

# 93 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP__CC1000Control__biasOn(void ){
#line 93
  CC1000ControlP__CC1000Control__biasOn();
#line 93
}
#line 93
# 146 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__enterPulseCheckState(void )
#line 146
{
  CC1000CsmaP__radioState = CC1000CsmaP__PULSECHECK_STATE;
  CC1000CsmaP__count = 0;
}

# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
inline static error_t CC1000CsmaP__RssiNoiseFloor__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC1000RssiP__Rssi__read(1U);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 660 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline bool CC1000SendReceiveP__ByteRadio__syncing(void )
#line 660
{
  return CC1000SendReceiveP__radioState == CC1000SendReceiveP__SYNC_STATE;
}

# 85 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
inline static bool CC1000CsmaP__ByteRadio__syncing(void ){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = CC1000SendReceiveP__ByteRadio__syncing();
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 271 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__WakeupTimer__fired(void )
#line 271
{
  uint8_t rstate;

#line 273
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      switch (CC1000CsmaP__radioState) 
        {
          case CC1000CsmaP__IDLE_STATE: 



            if (!CC1000CsmaP__ByteRadio__syncing()) 
              {
                CC1000CsmaP__cancelRssi();
                CC1000CsmaP__RssiNoiseFloor__read();
              }
          break;

          case CC1000CsmaP__POWERDOWN_STATE: 

            CC1000CsmaP__enterPulseCheckState();
          CC1000CsmaP__CC1000Control__biasOn();
          break;

          case CC1000CsmaP__PULSECHECK_STATE: 

            CC1000CsmaP__CC1000Control__rxMode();
          CC1000CsmaP__RssiPulseCheck__read();
          CC1000CsmaP__BusyWait__wait(80);
          {
#line 299
            __nesc_atomic_end(__nesc_atomic); 
#line 299
            return;
          }
        }
#line 301
      CC1000CsmaP__setWakeup();
      rstate = CC1000CsmaP__radioState;
    }
#line 303
    __nesc_atomic_end(__nesc_atomic); }
  if (rstate == CC1000CsmaP__PULSECHECK_STATE || rstate == CC1000CsmaP__IDLE_STATE) {
      printf("%lu | IDLE_STATE\n", CC1000CsmaP__getLocalTime());
      printfflush();
    }
  else {
      printf("%lu | SLEEP_STATE\n", CC1000CsmaP__getLocalTime());
      printfflush();
    }
}

# 128 "OMACC.nc"
static inline void OMACC__Timer__fired(void )
#line 128
{
  OMACC__dataReady = 1;
  OMACC__temp++;



  OMACC__sendMessage(&OMACC__MSG);
  printf("msg sent \n");
  printfflush();
}

# 193 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x40beb9f0){
#line 72
  switch (arg_0x40beb9f0) {
#line 72
    case 0U:
#line 72
      CC1000CsmaP__WakeupTimer__fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      OMACC__Timer__fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x40beb9f0);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(am_id_t arg_0x407c0490, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = CC1000ActiveMessageP__AMSend__send(arg_0x407c0490, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = CC1000ActiveMessageP__AMPacket__destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
#line 136
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = CC1000ActiveMessageP__AMPacket__type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 677 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 677
{
  __nesc_hton_uint8(CC1000SendReceiveP__getHeader(msg)->length.data, len);
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  CC1000SendReceiveP__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 54 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline cc1000_header_t * CC1000ActiveMessageP__getHeader(message_t * amsg)
#line 54
{
  return (cc1000_header_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->data - sizeof(cc1000_header_t ));
}

#line 138
static inline void CC1000ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type)
#line 138
{
  cc1000_header_t *header = CC1000ActiveMessageP__getHeader(amsg);

#line 140
  __nesc_hton_uint8(header->type.data, type);
}

# 151 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  CC1000ActiveMessageP__AMPacket__setType(amsg, t);
#line 151
}
#line 151
# 118 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void CC1000ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 118
{
  cc1000_header_t *header = CC1000ActiveMessageP__getHeader(amsg);

#line 120
  __nesc_hton_uint16(header->dest.data, addr);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  CC1000ActiveMessageP__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(msg, dest);
  /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(msg, 6);
  return /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(msg, len);
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 16 "/opt/tinyos-2.1.1/tos/system/SystemLowPowerListeningP.nc"
static inline uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDefaultRemoteWakeupInterval(void )
#line 16
{
#line 16
  return SystemLowPowerListeningP__remoteWakeup;
}

# 6 "/opt/tinyos-2.1.1/tos/interfaces/SystemLowPowerListening.nc"
inline static uint16_t /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SystemLowPowerListening__getDefaultRemoteWakeupInterval(void ){
#line 6
  unsigned short __nesc_result;
#line 6

#line 6
  __nesc_result = SystemLowPowerListeningP__SystemLowPowerListening__getDefaultRemoteWakeupInterval();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 65 "/opt/tinyos-2.1.1/tos/interfaces/LowPowerListening.nc"
inline static void /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__Lpl__setRemoteWakeupInterval(message_t * msg, uint16_t intervalMs){
#line 65
  CC1000CsmaP__LowPowerListening__setRemoteWakeupInterval(msg, intervalMs);
#line 65
}
#line 65
# 13 "/opt/tinyos-2.1.1/tos/system/LplAMSenderP.nc"
static inline error_t /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len)
{
  /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__Lpl__setRemoteWakeupInterval(msg, /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SystemLowPowerListening__getDefaultRemoteWakeupInterval());
  return /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__send(addr, msg, len);
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t OMACC__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 257 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

#line 288
static __inline  int16_t __nesc_hton_int16(void * target, int16_t value)
#line 288
{
#line 288
  __nesc_hton_uint16(target, value);
#line 288
  return value;
}

#line 288
static __inline  int16_t __nesc_ntoh_int16(const void * source)
#line 288
{
#line 288
  return __nesc_ntoh_uint16(source);
}

# 648 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__ByteRadio__setPreambleLength(uint16_t bytes)
#line 648
{
  /* atomic removed: atomic calls only */
#line 649
  CC1000SendReceiveP__preambleLength = bytes;
}

# 50 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP__ByteRadio__setPreambleLength(uint16_t bytes){
#line 50
  CC1000SendReceiveP__ByteRadio__setPreambleLength(bytes);
#line 50
}
#line 50
# 114 "CC1000CsmaP.nc"
static inline cc1000_metadata_t * CC1000CsmaP__getMetadata(message_t * amsg)
#line 114
{
  return (cc1000_metadata_t * )((uint8_t *)amsg + (unsigned short )& ((message_t *)0)->footer + sizeof(cc1000_footer_t ));
}

#line 577
static inline void CC1000CsmaP__setPreambleLength(message_t * msg)
#line 577
{
  cc1000_metadata_t *meta = CC1000CsmaP__getMetadata(msg);
  uint16_t s;
  uint32_t plen;

  if (__nesc_ntoh_int16(meta->strength_or_preamble.data) >= 0) {
    s = CC1000CsmaP__sleepTime;
    }
  else {
#line 585
    s = -(__nesc_ntoh_int16(meta->strength_or_preamble.data) + 1);
    }
#line 586
  __nesc_hton_int16(meta->strength_or_preamble.data, 0);

  if (s == 0) {
    plen = 6;
    }
  else {
#line 591
    plen = (s * 614UL >> 8) + 22;
    }
#line 592
  CC1000CsmaP__ByteRadio__setPreambleLength(plen);
}

#line 518
static inline uint16_t CC1000CsmaP__CsmaBackoff__default__initial(message_t *m)
#line 518
{

  return (CC1000CsmaP__Random__rand16() & 0x1F) + 1;
}

# 37 "/opt/tinyos-2.1.1/tos/interfaces/CsmaBackoff.nc"
inline static uint16_t CC1000CsmaP__CsmaBackoff__initial(message_t * m){
#line 37
  unsigned short __nesc_result;
#line 37

#line 37
  __nesc_result = CC1000CsmaP__CsmaBackoff__default__initial(m);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP__sleepCheck__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000CsmaP__sleepCheck);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 393 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__ByteRadio__rts(message_t * msg)
#line 393
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      CC1000CsmaP__f.txPending = TRUE;

      if (CC1000CsmaP__radioState == CC1000CsmaP__POWERDOWN_STATE) {
        CC1000CsmaP__sleepCheck__postTask();
        }
#line 400
      if (! CC1000CsmaP__f.ccaOff) {
        CC1000CsmaP__macDelay = CC1000CsmaP__CsmaBackoff__initial(CC1000CsmaP__ByteRadio__getTxMessage());
        }
      else {
#line 403
        CC1000CsmaP__macDelay = 1;
        }
      CC1000CsmaP__setPreambleLength(msg);
    }
#line 406
    __nesc_atomic_end(__nesc_atomic); }
}

# 25 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000SendReceiveP__ByteRadio__rts(message_t * msg){
#line 25
  CC1000CsmaP__ByteRadio__rts(msg);
#line 25
}
#line 25
# 267 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP__Send__send(message_t *msg, uint8_t len)
#line 267
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (CC1000SendReceiveP__f.txBusy || CC1000SendReceiveP__radioState == CC1000SendReceiveP__OFF_STATE) 
        {
          unsigned char __nesc_temp = 
#line 271
          FAIL;

          {
#line 271
            __nesc_atomic_end(__nesc_atomic); 
#line 271
            return __nesc_temp;
          }
        }
      else 
#line 272
        {
          cc1000_header_t *header = CC1000SendReceiveP__getHeader(msg);
          cc1000_metadata_t *metadata = CC1000SendReceiveP__getMetadata(msg);

          CC1000SendReceiveP__f.txBusy = TRUE;
          __nesc_hton_uint8(header->length.data, len);
          CC1000SendReceiveP__txBufPtr = msg;

          __nesc_hton_int8(metadata->timesync.data, FALSE);
          __nesc_hton_uint32(metadata->timestamp.data, CC1000_INVALID_TIMESTAMP);
        }
    }
#line 283
    __nesc_atomic_end(__nesc_atomic); }
  CC1000SendReceiveP__ByteRadio__rts(msg);

  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t CC1000ActiveMessageP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC1000SendReceiveP__Send__send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle();
#line 31
}
#line 31
# 88 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 88
{
  LedsP__Led1__toggle();
  ;
#line 90
  ;
}

# 72 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void OMACC__Leds__led1Toggle(void ){
#line 72
  LedsP__Leds__led1Toggle();
#line 72
}
#line 72
# 158 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 81 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static bool CC1000CsmaP__WakeupTimer__isRunning(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(0U);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
#line 62
inline static void CC1000CsmaP__WakeupTimer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 62
}
#line 62
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 135 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 135
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 45
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 45
}
#line 45
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void )
#line 50
{
#line 50
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer0AsyncP__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 206 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 206
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 67
}
#line 67
# 128 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 72
}
#line 72
# 226 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 105
  unsigned long __nesc_result;
#line 105

#line 105
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 48 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(uint8_t arg_0x40b100c8, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val){
#line 63
    /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(arg_0x40b100c8, result, val);
#line 63
}
#line 63
# 47 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(uint8_t arg_0x40b0e010){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
    __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(arg_0x40b0e010);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 39 "/opt/tinyos-2.1.1/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(client, result, data);
}

# 63 "/opt/tinyos-2.1.1/tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x40b030c8, error_t result, AdcP__Read__val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(arg_0x40b030c8, result, val);
#line 63
}
#line 63
# 103 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__acquiredData__runTask(void )
#line 103
{
  AdcP__state = AdcP__IDLE;
  AdcP__Read__readDone(AdcP__client, SUCCESS, AdcP__val);
}

#line 86
static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient)
#line 86
{

  AdcP__state = newState;
  AdcP__client = newClient;
  AdcP__sample();

  return SUCCESS;
}





static inline error_t AdcP__ReadNow__read(uint8_t c)
#line 99
{
  return AdcP__startGet(AdcP__ACQUIRE_DATA_NOW, c);
}

# 58 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
inline static error_t CC1000RssiP__ActualRssi__read(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = AdcP__ReadNow__read(/*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__ID);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 71 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP__Resource__granted(void )
#line 71
{
  CC1000RssiP__ActualRssi__read();
}

# 199 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 199
{
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x40aa9380){
#line 92
  switch (arg_0x40aa9380) {
#line 92
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__HAL_ID:
#line 92
      CC1000RssiP__Resource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x40aa9380);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 187 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
}

# 161 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline message_t *CC1000ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 161
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * CC1000ActiveMessageP__Snoop__receive(am_id_t arg_0x408ac3e0, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = CC1000ActiveMessageP__Snoop__default__receive(arg_0x408ac3e0, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 73 "OMACC.nc"
static inline uint16_t OMACC__getParentSleepTime(void )
#line 73
{
  return SLEEPTIME[OMACC__myHop - 1];
}

# 65 "/opt/tinyos-2.1.1/tos/interfaces/LowPowerListening.nc"
inline static void OMACC__LPL__setRemoteWakeupInterval(message_t * msg, uint16_t intervalMs){
#line 65
  CC1000CsmaP__LowPowerListening__setRemoteWakeupInterval(msg, intervalMs);
#line 65
}
#line 65
# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle();
#line 31
}
#line 31
# 73 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 73
{
  LedsP__Led0__toggle();
  ;
#line 75
  ;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void OMACC__Leds__led0Toggle(void ){
#line 56
  LedsP__Leds__led0Toggle();
#line 56
}
#line 56
# 685 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void *CC1000SendReceiveP__Packet__getPayload(message_t *msg, uint8_t len)
#line 685
{
  if (len <= 28) {
      return (void * )msg->data;
    }
  else {
      return (void *)0;
    }
}

# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void * CC1000ActiveMessageP__Packet__getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = CC1000SendReceiveP__Packet__getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 85 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void *CC1000ActiveMessageP__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len)
#line 85
{
  return CC1000ActiveMessageP__Packet__getPayload(m, len);
}

# 124 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(am_id_t arg_0x407c0490, message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = CC1000ActiveMessageP__AMSend__getPayload(arg_0x407c0490, msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 203 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 203
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__getPayload(0, m, len);
}

# 114 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void * /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__getPayload(0U, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 65 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void */*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(m, len);
}

# 124 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void * /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 22 "/opt/tinyos-2.1.1/tos/system/LplAMSenderP.nc"
static inline void */*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__getPayload(message_t *msg, uint8_t len)
#line 22
{
#line 22
  return /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__getPayload(msg, len);
}

# 124 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void * OMACC__AMSend__getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 165 "OMACC.nc"
static inline message_t *OMACC__Receive__receive(message_t *msg, void *payload, uint8_t len)
{
  radio_temp_packet_t *pay;

#line 168
  pay = (radio_temp_packet_t *)OMACC__AMSend__getPayload(msg, 6);
  OMACC__Leds__led0Toggle();










  if (__nesc_ntoh_int16(pay->hop_from_sink.data) == OMACC__myHop + 1) {
      ;
      printf("msg received");
      printfflush();

      __nesc_hton_int16(pay->hop_from_sink.data, OMACC__myHop);
      OMACC__LPL__setRemoteWakeupInterval(msg, OMACC__getParentSleepTime());
      OMACC__childMsg = msg;




      OMACC__sendMessage(msg);
    }
  else 
    {
      ;
    }



  return msg;
}

# 157 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline message_t *CC1000ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 157
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * CC1000ActiveMessageP__Receive__receive(am_id_t arg_0x40891c70, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x40891c70) {
#line 67
    case 6:
#line 67
      __nesc_result = OMACC__Receive__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = CC1000ActiveMessageP__Receive__default__receive(arg_0x40891c70, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 49 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
inline static am_addr_t CC1000ActiveMessageP__amAddress(void ){
#line 49
  unsigned short __nesc_result;
#line 49

#line 49
  __nesc_result = ActiveMessageAddressC__amAddress();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
#line 104
static inline am_addr_t CC1000ActiveMessageP__AMPacket__address(void )
#line 104
{
  return CC1000ActiveMessageP__amAddress();
}

#line 128
static inline bool CC1000ActiveMessageP__AMPacket__isForMe(message_t *amsg)
#line 128
{
  return CC1000ActiveMessageP__AMPacket__destination(amsg) == CC1000ActiveMessageP__AMPacket__address() || 
  CC1000ActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

#line 58
static inline cc1000_footer_t *CC1000ActiveMessageP__getFooter(message_t *amsg)
#line 58
{
  return (cc1000_footer_t *)amsg->footer;
}

#line 91
static inline message_t *CC1000ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 91
{
  cc1000_footer_t *msg_footer = CC1000ActiveMessageP__getFooter(msg);

#line 93
  if (__nesc_ntoh_leuint16(msg_footer->crc.data) == 1) {
      if (CC1000ActiveMessageP__AMPacket__isForMe(msg)) {
          return CC1000ActiveMessageP__Receive__receive(CC1000ActiveMessageP__AMPacket__type(msg), msg, payload, len);
        }
      else {
          return CC1000ActiveMessageP__Snoop__receive(CC1000ActiveMessageP__AMPacket__type(msg), msg, payload, len);
        }
    }
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * CC1000SendReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = CC1000ActiveMessageP__SubReceive__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 583 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__signalPacketReceived__runTask(void )
#line 583
{
  message_t *pBuf;
  cc1000_header_t *pHeader;

#line 586
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (CC1000SendReceiveP__radioState != CC1000SendReceiveP__RECEIVED_STATE) {
        {
#line 589
          __nesc_atomic_end(__nesc_atomic); 
#line 589
          return;
        }
        }
#line 591
      pBuf = CC1000SendReceiveP__rxBufPtr;
    }
#line 592
    __nesc_atomic_end(__nesc_atomic); }
  pHeader = CC1000SendReceiveP__getHeader(pBuf);
  pBuf = CC1000SendReceiveP__Receive__receive(pBuf, pBuf->data, __nesc_ntoh_uint8(pHeader->length.data));
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (pBuf) {
        CC1000SendReceiveP__rxBufPtr = pBuf;
        }
#line 599
      if (CC1000SendReceiveP__radioState == CC1000SendReceiveP__RECEIVED_STATE) {
        CC1000SendReceiveP__enterListenState();
        }
#line 601
      CC1000SendReceiveP__ByteRadio__rxDone();
    }
#line 602
    __nesc_atomic_end(__nesc_atomic); }
}

# 205 "OMACC.nc"
static inline void OMACC__AMSend__sendDone(message_t *bufPtr, error_t error)
#line 205
{
  ;
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  OMACC__AMSend__sendDone(msg, error);
#line 99
}
#line 99
# 19 "/opt/tinyos-2.1.1/tos/system/LplAMSenderP.nc"
static inline void /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__sendDone(message_t *msg, error_t error)
#line 19
{
#line 19
  /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__sendDone(msg, error);
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  /*OMACAppC.AMSenderC.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

# 207 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(uint8_t arg_0x407c19d8, message_t * msg, error_t error){
#line 89
  switch (arg_0x407c19d8) {
#line 89
    case 0U:
#line 89
      /*OMACAppC.AMSenderC.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(arg_0x407c19d8, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 155 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, err);
}

#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void CC1000ActiveMessageP__AMSend__sendDone(am_id_t arg_0x408912b0, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(arg_0x408912b0, msg, error);
#line 99
}
#line 99
# 77 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static inline void CC1000ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result)
#line 77
{
  CC1000ActiveMessageP__AMSend__sendDone(CC1000ActiveMessageP__AMPacket__type(msg), msg, result);
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void CC1000SendReceiveP__Send__sendDone(message_t * msg, error_t error){
#line 89
  CC1000ActiveMessageP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 406 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__signalPacketSent__runTask(void )
#line 406
{
  message_t *pBuf;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      pBuf = CC1000SendReceiveP__txBufPtr;
      CC1000SendReceiveP__f.txBusy = FALSE;
      CC1000SendReceiveP__enterListenState();
    }
#line 414
    __nesc_atomic_end(__nesc_atomic); }
  CC1000SendReceiveP__Send__sendDone(pBuf, SUCCESS);
}

# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
    }
}

# 672 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline uint8_t CC1000SendReceiveP__Packet__payloadLength(message_t *msg)
#line 672
{
  cc1000_header_t *header = CC1000SendReceiveP__getHeader(msg);

#line 674
  return __nesc_ntoh_uint8(header->length.data);
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = CC1000SendReceiveP__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 62 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SquelchP.nc"
static inline void CC1000SquelchP__CC1000Squelch__adjust(uint16_t data)
#line 62
{
  uint16_t squelchTab[CC1K_SquelchTableSize];
  uint8_t i;
#line 64
  uint8_t j;
#line 64
  uint8_t min;
  uint32_t newThreshold;

  CC1000SquelchP__squelchTable[CC1000SquelchP__squelchIndex++] = data;
  if (CC1000SquelchP__squelchIndex >= CC1K_SquelchTableSize) {
    CC1000SquelchP__squelchIndex = 0;
    }
#line 70
  if (CC1000SquelchP__squelchCount <= CC1K_SquelchCount) {
    CC1000SquelchP__squelchCount++;
    }

  memcpy(squelchTab, CC1000SquelchP__squelchTable, sizeof CC1000SquelchP__squelchTable);
  for (j = 0; ; j++) 
    {
      min = 0;
      for (i = 1; i < CC1K_SquelchTableSize; i++) 
        if (squelchTab[i] > squelchTab[min]) {
          min = i;
          }
#line 81
      if (j == 3) {
        break;
        }
#line 83
      squelchTab[min] = 0;
    }

  newThreshold = ((uint32_t )CC1000SquelchP__clearThreshold << 5) + (
  (uint32_t )squelchTab[min] << 1);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 88
    CC1000SquelchP__clearThreshold = newThreshold / 34;
#line 88
    __nesc_atomic_end(__nesc_atomic); }
}

# 40 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Squelch.nc"
inline static void CC1000CsmaP__CC1000Squelch__adjust(uint16_t data){
#line 40
  CC1000SquelchP__CC1000Squelch__adjust(data);
#line 40
}
#line 40
# 482 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__adjustSquelch__runTask(void )
#line 482
{
  uint16_t squelchData;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 485
    squelchData = CC1000CsmaP__rssiForSquelch;
#line 485
    __nesc_atomic_end(__nesc_atomic); }
  CC1000CsmaP__CC1000Squelch__adjust(squelchData);
}

#line 141
static inline void CC1000CsmaP__enterPowerDownState(void )
#line 141
{
  CC1000CsmaP__cancelRssi();
  CC1000CsmaP__radioState = CC1000CsmaP__POWERDOWN_STATE;
}

# 89 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__disableIntr(void )
#line 89
{
  * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
  * (volatile uint8_t *)(0x17 + 0x20) |= 1 << 0;
  * (volatile uint8_t *)(0x18 + 0x20) &= ~(1 << 0);
}

# 69 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__disableIntr(void ){
#line 69
  HplCC1000SpiP__HplCC1000Spi__disableIntr();
#line 69
}
#line 69
# 168 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterInactiveState(void )
#line 168
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__INACTIVE_STATE;
}

#line 436
static inline void CC1000SendReceiveP__ByteRadio__off(void )
#line 436
{
  CC1000SendReceiveP__enterInactiveState();
  CC1000SendReceiveP__HplCC1000Spi__disableIntr();
}

# 66 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP__ByteRadio__off(void ){
#line 66
  CC1000SendReceiveP__ByteRadio__off();
#line 66
}
#line 66
# 68 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP__CC1000Control__off(void ){
#line 68
  CC1000ControlP__CC1000Control__off();
#line 68
}
#line 68
# 170 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__radioOff(void )
#line 170
{
  CC1000CsmaP__CC1000Control__off();
  CC1000CsmaP__ByteRadio__off();
}

# 95 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SquelchP.nc"
static inline bool CC1000SquelchP__CC1000Squelch__settled(void )
#line 95
{
  return CC1000SquelchP__squelchCount > CC1K_SquelchCount;
}

# 53 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Squelch.nc"
inline static bool CC1000CsmaP__CC1000Squelch__settled(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC1000SquelchP__CC1000Squelch__settled();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 318 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__sleepCheck__runTask(void )
#line 318
{
  bool turnOn = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (CC1000CsmaP__f.txPending || !CC1000CsmaP__sleepTime) 
      {
        if (CC1000CsmaP__radioState == CC1000CsmaP__PULSECHECK_STATE || CC1000CsmaP__radioState == CC1000CsmaP__POWERDOWN_STATE) 
          {
            CC1000CsmaP__enterIdleStateSetWakeup();
            turnOn = TRUE;
          }
      }
    else {
#line 330
      if (CC1000CsmaP__CC1000Squelch__settled() && !CC1000CsmaP__ByteRadio__syncing()) 
        {
          CC1000CsmaP__radioOff();
          CC1000CsmaP__enterPowerDownState();
          CC1000CsmaP__setWakeup();
        }
      }
#line 336
    __nesc_atomic_end(__nesc_atomic); }

  if (turnOn) {
      CC1000CsmaP__radioOn();
      printf("%lu | IDLE_STATE\n", CC1000CsmaP__getLocalTime());
      printfflush();
    }
  else {
      printf("%lu | SLEEP_STATE\n", CC1000CsmaP__getLocalTime());
      printfflush();
    }
}

# 334 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP__CC1000Control__coreOn(void )
#line 334
{

  CC1000ControlP__CC__write(CC1K_MAIN, ((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
}

# 85 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP__CC1000Control__coreOn(void ){
#line 85
  CC1000ControlP__CC1000Control__coreOn();
#line 85
}
#line 85
# 82 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__enableIntr(void )
#line 82
{

  * (volatile uint8_t *)(0x0D + 0x20) = 0xc0;
  * (volatile uint8_t *)(0x17 + 0x20) &= ~(1 << 0);
}

# 64 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__enableIntr(void ){
#line 64
  HplCC1000SpiP__HplCC1000Spi__enableIntr();
#line 64
}
#line 64
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t OMACC__AMControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = CC1000CsmaP__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 143 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void OMACC__Timer__startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 53
}
#line 53
# 365 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP__CC1000Control__setRFPower(uint8_t newPower)
#line 365
{
  CC1000ControlP__power = newPower;
}

# 103 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
inline static void OMACC__CC1000Control__setRFPower(uint8_t power){
#line 103
  CC1000ControlP__CC1000Control__setRFPower(power);
#line 103
}
#line 103
# 113 "OMACC.nc"
static inline void OMACC__AMControl__startDone(error_t err)
#line 113
{

  OMACC__CC1000Control__setRFPower(0x09);

  if (err == SUCCESS) {
      OMACC__Timer__startPeriodic(SAMPLING_FREQUENCY);
    }
  else {
      ;
      OMACC__AMControl__start();
    }
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void CC1000CsmaP__SplitControl__startDone(error_t error){
#line 92
  OMACC__AMControl__startDone(error);
#line 92
}
#line 92
# 126 "OMACC.nc"
static inline void OMACC__AMControl__stopDone(error_t err)
#line 126
{
}

# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void CC1000CsmaP__SplitControl__stopDone(error_t error){
#line 117
  OMACC__AMControl__stopDone(error);
#line 117
}
#line 117
# 187 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__startStopDone__runTask(void )
#line 187
{
  uint8_t s;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    s = CC1000CsmaP__radioState;
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  if (s == CC1000CsmaP__DISABLED_STATE) {
    CC1000CsmaP__SplitControl__stopDone(SUCCESS);
    }
  else {
#line 195
    CC1000CsmaP__SplitControl__startDone(SUCCESS);
    }
}

# 382 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ControlP.nc"
static inline bool CC1000ControlP__CC1000Control__getLOStatus(void )
#line 382
{


  return TRUE;
}

# 136 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
inline static bool CC1000SendReceiveP__CC1000Control__getLOStatus(void ){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = CC1000ControlP__CC1000Control__getLOStatus();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 249 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP__StdControl__start(void )
#line 249
{
  /* atomic removed: atomic calls only */
  {
    CC1000SendReceiveP__enterInactiveState();
    CC1000SendReceiveP__f.txBusy = FALSE;
    CC1000SendReceiveP__f.invert = CC1000SendReceiveP__CC1000Control__getLOStatus();
  }
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t CC1000CsmaP__ByteRadioControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = CC1000SendReceiveP__StdControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP__startStopDone__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000CsmaP__startStopDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 267 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__setWakeupTask__runTask(void )
#line 267
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    CC1000CsmaP__setWakeup();
#line 268
    __nesc_atomic_end(__nesc_atomic); }
}

# 118 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg, FAIL);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t PrintfP__retrySend__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PrintfP__retrySend);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t PrintfP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 127 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static inline void PrintfP__retrySend__runTask(void )
#line 127
{
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  PrintfP__AMSend__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 207 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x407c19d8, message_t * msg, error_t error){
#line 89
  switch (arg_0x407c19d8) {
#line 89
    case 0U:
#line 89
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x407c19d8, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 161
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 111 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 111
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 113
  return __nesc_ntoh_uint8(header->length.data);
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
    }
}

#line 166
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 166
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 174
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x40549888, message_t * msg, error_t error){
#line 99
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x40549888, msg, error);
#line 99
}
#line 99
# 90 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 90
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 365 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 365
{
  return;
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x40621010, message_t * msg, error_t error){
#line 89
  switch (arg_0x40621010) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x40621010, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 147 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 147
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 151
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 153
    error = ECANCEL;
    }
#line 154
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 201
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 201
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 98 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 98
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x4054d298, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x4054d298, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 102 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 102
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 360 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 362
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x40612918, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x40612918) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x40612918, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 46 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 46
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 354 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 355
{
  return 0;
}

# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x40621b10, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x40621b10) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x40621b10, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 264 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 264
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 269
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 278
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 123 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static inline void PrintfP__SerialControl__stopDone(error_t error)
#line 123
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 124
    PrintfP__state = PrintfP__S_STOPPED;
#line 124
    __nesc_atomic_end(__nesc_atomic); }
}

# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 117
  PrintfP__SerialControl__stopDone(error);
#line 117
}
#line 117
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 125 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 125
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 113 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 113
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 93 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 330 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 330
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 335
{
  SerialP__SerialFlush__flushDone();
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 338 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 338
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 38 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 38
  SerialP__SerialFlush__default__flush();
#line 38
}
#line 38
# 326 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 326
{
  SerialP__SerialFlush__flush();
}

# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle();
#line 31
}
#line 31
# 103 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 103
{
  LedsP__Led2__toggle();
  ;
#line 105
  ;
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void OMACC__Leds__led2Toggle(void ){
#line 89
  LedsP__Leds__led2Toggle();
#line 89
}
#line 89
# 69 "OMACC.nc"
static inline uint16_t OMACC__getSelfSleepTime(void )
#line 69
{
  return SLEEPTIME[OMACC__myHop];
}

# 554 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__LowPowerListening__setLocalWakeupInterval(uint16_t s)
#line 554
{
  CC1000CsmaP__sleepTime = CC1000CsmaP__validateSleepInterval(s);
}

# 52 "/opt/tinyos-2.1.1/tos/interfaces/LowPowerListening.nc"
inline static void OMACC__LPL__setLocalWakeupInterval(uint16_t intervalMs){
#line 52
  CC1000CsmaP__LowPowerListening__setLocalWakeupInterval(intervalMs);
#line 52
}
#line 52
# 61 "OMACC.nc"
static inline void OMACC__setMyHop(void )
#line 61
{



  OMACC__myHop = HOP[TOS_NODE_ID - 1];
}

#line 101
static inline void OMACC__Boot__booted(void )
#line 101
{
  OMACC__setMyHop();
  OMACC__AMControl__start();
  ;


  OMACC__LPL__setLocalWakeupInterval(OMACC__getSelfSleepTime());
  OMACC__Leds__led2Toggle();
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void PrintfP__Boot__booted(void ){
#line 49
  OMACC__Boot__booted();
#line 49
}
#line 49
# 113 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static inline void PrintfP__SerialControl__startDone(error_t error)
#line 113
{
  if (PrintfP__state == PrintfP__S_STOPPED) {

      __iob[1] = &atm128_stdout;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 118
        PrintfP__state = PrintfP__S_STARTED;
#line 118
        __nesc_atomic_end(__nesc_atomic); }
      PrintfP__Boot__booted();
    }
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 92
  PrintfP__SerialControl__startDone(error);
#line 92
}
#line 92
# 142 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 142
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 119 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 119
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 107 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 107
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 147 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 147
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 137 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 137
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 320 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 320
{
  SerialP__SerialControl__start();
  SerialP__SplitControl__startDone(SUCCESS);
}

# 45 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 183 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 80 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 80
}
#line 80
# 242 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 242
{
  bool ret;

#line 244
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 244
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 244
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 258
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 260
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 268
{
  uint8_t retval = 0;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
          retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
          if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 273
            SerialP__ackQ.readPtr = 0;
            }
        }
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
#line 276
  return retval;
}

#line 539
static inline void SerialP__RunTx__runTask(void )
#line 539
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 556
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 565
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      SerialP__txSeqno++;
      if (SerialP__txProto == SERIAL_PROTO_ACK) {
          SerialP__ack_queue_pop();
        }
      else {
          result = done ? SUCCESS : FAIL;
          send_completed = TRUE;
        }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 583
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 583
        goInactive = SerialP__offPending;
#line 583
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 585
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 585
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 591
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 591
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 594
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 596
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();
                }
#line 599
                __nesc_atomic_end(__nesc_atomic); }
              SerialP__txProto = SERIAL_PROTO_ACK;
              SerialP__txIndex = SerialP__TX_ACK_INDEX;
              start_it = TRUE;
            }
          else {
#line 604
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                SerialP__txIndex = SerialP__TX_DATA_INDEX;
                start_it = TRUE;
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }

  if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
      SerialP__testOff();
      return;
    }

  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 633
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 635
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 635
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 131 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 131
{
  * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 214 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 214
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 205
static __inline void SerialP__rxInit(void )
#line 205
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_NOSYNC;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 193
static __inline void SerialP__txInit(void )
#line 193
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 195
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_IDLE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 218
static inline error_t SerialP__Init__init(void )
#line 218
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 120 "/opt/tinyos-2.1.1/tos/platforms/mica/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC__cycles << 12) / baudrate - 1;
}

# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 181 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 181
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 87
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 87
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 53 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SquelchP.nc"
static inline error_t CC1000SquelchP__Init__init(void )
#line 53
{
  uint8_t i;

  for (i = 0; i < CC1K_SquelchTableSize; i++) 
    CC1000SquelchP__squelchTable[i] = CC1K_SquelchInit;

  return SUCCESS;
}

# 103 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP__calibrate(void )
#line 103
{
  CC1000ControlP__CC__write(CC1K_PA_POW, 0x00);
  CC1000ControlP__CC__write(CC1K_TEST4, 0x3f);


  CC1000ControlP__CC__write(CC1K_MAIN, (1 << CC1K_TX_PD) | (1 << CC1K_RESET_N));

  CC1000ControlP__calibrateNow();


  CC1000ControlP__CC__write(CC1K_MAIN, (((
  1 << CC1K_RXTX) | (
  1 << CC1K_F_REG)) | (
  1 << CC1K_RX_PD)) | (
  1 << CC1K_RESET_N));

  CC1000ControlP__CC__write(CC1K_CURRENT, CC1000ControlP__txCurrent);
  CC1000ControlP__CC__write(CC1K_PA_POW, 0);

  CC1000ControlP__calibrateNow();

  CC1000ControlP__CC1000Control__rxMode();
}

#line 287
static inline void CC1000ControlP__CC1000Control__tunePreset(uint8_t freq)
#line 287
{
  int i;


  for (i = CC1K_FREQ_2A; i <= CC1K_PLL; i++) 
    CC1000ControlP__CC__write(i, __extension__ ({
#line 292
      uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][i];
#line 292
      uint8_t __result;

#line 292
       __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
    }
    ));
#line 293
  CC1000ControlP__CC__write(CC1K_MATCH, __extension__ ({
#line 293
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_MATCH];
#line 293
    uint8_t __result;

#line 293
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  ));
#line 294
  CC1000ControlP__rxCurrent = __extension__ ({
#line 294
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_CURRENT];
#line 294
    uint8_t __result;

#line 294
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 295
  CC1000ControlP__txCurrent = __extension__ ({
#line 295
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_MATCH + 1];
#line 295
    uint8_t __result;

#line 295
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 296
  CC1000ControlP__power = __extension__ ({
#line 296
    uint16_t __addr16 = (uint16_t )(uint16_t )&CC1K_Params[freq][CC1K_PA_POW];
#line 296
    uint8_t __result;

#line 296
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 298
  CC1000ControlP__calibrate();
}

# 55 "/opt/tinyos-2.1.1/tos/lib/timer/BusyWait.nc"
inline static void CC1000ControlP__BusyWait__wait(CC1000ControlP__BusyWait__size_type dt){
#line 55
  BusyWaitMicroC__BusyWait__wait(dt);
#line 55
}
#line 55
# 78 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline void HplCC1000P__HplCC1000__init(void )
#line 78
{
}

# 52 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000.nc"
inline static void CC1000ControlP__CC__init(void ){
#line 52
  HplCC1000P__HplCC1000__init();
#line 52
}
#line 52
# 246 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ControlP.nc"
static inline void CC1000ControlP__CC1000Control__init(void )
#line 246
{
  CC1000ControlP__CC__init();


  CC1000ControlP__CC__write(CC1K_MAIN, (((
  1 << CC1K_RX_PD) | (1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (1 << CC1K_BIAS_PD));

  CC1000ControlP__CC1000Control__coreOn();
  CC1000ControlP__BusyWait__wait(2000);



  CC1000ControlP__power = (8 << CC1K_PA_HIGHPOWER) | (0 << CC1K_PA_LOWPOWER);
  CC1000ControlP__CC__write(CC1K_PA_POW, CC1000ControlP__power);


  CC1000ControlP__CC__write(CC1K_LOCK_SELECT, 9 << CC1K_LOCK_SELECT);


  CC1000ControlP__CC__write(CC1K_MODEM2, 0);
  CC1000ControlP__CC__write(CC1K_MODEM1, (((
  3 << CC1K_MLIMIT) | (
  1 << CC1K_LOCK_AVG_MODE)) | (
  3 << CC1K_SETTLING)) | (
  1 << CC1K_MODEM_RESET_N));
  CC1000ControlP__CC__write(CC1K_MODEM0, ((
  5 << CC1K_BAUDRATE) | (
  1 << CC1K_DATA_FORMAT)) | (
  1 << CC1K_XOSC_FREQ));

  CC1000ControlP__CC__write(CC1K_FSCTRL, 1 << CC1K_FS_RESET_N);




  CC1000ControlP__CC1000Control__tunePreset(1);

  CC1000ControlP__CC1000Control__off();
}

# 39 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Control.nc"
inline static void CC1000CsmaP__CC1000Control__init(void ){
#line 39
  CC1000ControlP__CC1000Control__init();
#line 39
}
#line 39
# 96 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP__HplCC1000Spi__initSlave(void )
#line 96
{
  /* atomic removed: atomic calls only */
#line 97
  {
    * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
    * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
  }
}

# 74 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void CC1000SendReceiveP__HplCC1000Spi__initSlave(void ){
#line 74
  HplCC1000SpiP__HplCC1000Spi__initSlave();
#line 74
}
#line 74
# 243 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline error_t CC1000SendReceiveP__Init__init(void )
#line 243
{
  CC1000SendReceiveP__f.ack = TRUE;
  CC1000SendReceiveP__HplCC1000Spi__initSlave();
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t CC1000CsmaP__ByteRadioInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC1000SendReceiveP__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 180 "CC1000CsmaP.nc"
static inline error_t CC1000CsmaP__Init__init(void )
#line 180
{
  CC1000CsmaP__ByteRadioInit__init();
  CC1000CsmaP__CC1000Control__init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 51
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 44 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 122 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 122
{
#line 122
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 56
  HplAtm128Timer0AsyncP__Compare__start();
#line 56
}
#line 56
# 76 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x)
#line 76
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 37 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 37
  HplAtm128Timer0AsyncP__TimerCtrl__setControl(control);
#line 37
}
#line 37
# 198 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 198
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC1000CsmaP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC1000SquelchP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 7)) != 0;
}

# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static bool HplCC1000P__PDATA__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )50U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PCLK__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 7);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PDATA__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeInput();
#line 33
}
#line 33
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )50U &= ~(1 << 7);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PDATA__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__clr();
#line 30
}
#line 30
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )50U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P__PALE__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr();
#line 30
}
#line 30
# 146 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline uint8_t HplCC1000P__HplCC1000__read(uint8_t addr)
#line 146
{
  int cnt;
  uint8_t din;
  uint8_t data = 0;


  addr <<= 1;
  HplCC1000P__PALE__clr();
  for (cnt = 0; cnt < 7; cnt++) 
    {
      if (addr & 0x80) {
        HplCC1000P__PDATA__set();
        }
      else {
#line 159
        HplCC1000P__PDATA__clr();
        }
#line 160
      HplCC1000P__PCLK__clr();
      HplCC1000P__PCLK__set();
      addr <<= 1;
    }
  HplCC1000P__PDATA__clr();
  HplCC1000P__PCLK__clr();
  HplCC1000P__PCLK__set();

  HplCC1000P__PDATA__makeInput();
  HplCC1000P__PALE__set();


  for (cnt = 7; cnt >= 0; cnt--) 
    {
      HplCC1000P__PCLK__clr();
      din = HplCC1000P__PDATA__get();
      if (din) {
        data = (data << 1) | 0x01;
        }
      else {
#line 179
        data = (data << 1) & 0xfe;
        }
#line 180
      HplCC1000P__PCLK__set();
    }

  HplCC1000P__PALE__set();
  HplCC1000P__PDATA__makeOutput();
  HplCC1000P__PDATA__set();

  return data;
}

# 66 "/opt/tinyos-2.1.1/tos/chips/cc1000/HplCC1000.nc"
inline static uint8_t CC1000ControlP__CC__read(uint8_t addr){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = HplCC1000P__HplCC1000__read(addr);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 342 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 342
{
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t PrintfP__SerialControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = SerialP__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 109 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static inline void PrintfP__MainBoot__booted(void )
#line 109
{
  PrintfP__SerialControl__start();
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 49
  PrintfP__MainBoot__booted();
#line 49
}
#line 49
# 155 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void )
#line 155
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 170
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HplAtm128Timer0AsyncP__McuPowerOverride__lowestState();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 66
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 134 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 97
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 102
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 102
    uint8_t __result;

#line 102
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 104
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");}

# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 59
  McuSleepC__McuSleep__sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 72
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 138
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 61
  SchedulerBasicP__Scheduler__taskLoop();
#line 61
}
#line 61
# 387 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 387
{
  SerialP__rx_state_machine(FALSE, data);
}

# 83 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 83
  SerialP__SerialFrameComm__dataReceived(data);
#line 83
}
#line 83
# 384 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 384
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 74 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 74
  SerialP__SerialFrameComm__delimiterReceived();
#line 74
}
#line 74
# 61 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 61
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 73
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 78
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 83
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 116 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 116
{
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 391 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 391
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 192 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 192
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 188
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 188
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 215
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 215
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 217
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 51 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 309 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 309
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 312
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 69 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 69
}
#line 69
# 210 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 210
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 232 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 232
{
  uint8_t tmp;
#line 233
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 234
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 238
    tmp = 0;
    }
#line 239
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 248
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 250
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 252
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 254
      SerialP__MaybeScheduleTx();
    }
}

# 233 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 233
{
  /* atomic removed: atomic calls only */
#line 234
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 255
            ;
      }
  }
}

# 58 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 58
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 58
}
#line 58
# 299 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 299
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 301
  return tmp;
}

#line 303
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 303
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 305
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 305
    SerialP__rxBuf.readPtr = 0;
    }
#line 306
  return tmp;
}

#line 295
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 295
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 297
    SerialP__rxBuf.writePtr = 0;
    }
}

# 55 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 55
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 68 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 68
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 68
}
#line 68
#line 54
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 513 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 513
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 515
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 60 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 167 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 167
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 170
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 70 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 642 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 642
{
  {
    error_t txResult = SUCCESS;

    switch (SerialP__txState) {

        case SerialP__TXSTATE_PROTO: 

          txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

        SerialP__txState = SerialP__TXSTATE_INFO;



        SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
        break;

        case SerialP__TXSTATE_SEQNO: 
          txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
        SerialP__txState = SerialP__TXSTATE_INFO;
        SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
        break;

        case SerialP__TXSTATE_INFO: 
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 666
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 673
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
#line 684
            __nesc_atomic_end(__nesc_atomic); }
        break;

        case SerialP__TXSTATE_FCS1: 
          txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
        SerialP__txState = SerialP__TXSTATE_FCS2;
        break;

        case SerialP__TXSTATE_FCS2: 
          txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
        SerialP__txState = SerialP__TXSTATE_ENDFLAG;
        break;

        case SerialP__TXSTATE_ENDFLAG: 
          txResult = SerialP__SerialFrameComm__putDelimiter();
        SerialP__txState = SerialP__TXSTATE_ENDWAIT;
        break;

        case SerialP__TXSTATE_ENDWAIT: 
          SerialP__txState = SerialP__TXSTATE_FINISH;
        case SerialP__TXSTATE_FINISH: 
          SerialP__MaybeScheduleTx();
        break;
        case SerialP__TXSTATE_ERROR: 
          default: 
            txResult = FAIL;
        break;
      }

    if (txResult != SUCCESS) {
        SerialP__txState = SerialP__TXSTATE_ERROR;
        SerialP__MaybeScheduleTx();
      }
  }
}

# 89 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 89
  SerialP__SerialFrameComm__putDone();
#line 89
}
#line 89
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 104 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 105
{
  if (HdlcTranslateC__state.sendEscape) {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
      HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
    }
  else {
      HdlcTranslateC__SerialFrameComm__putDone();
    }
}

# 57 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 277 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 277
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 276 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 276
{
}

# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 188 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareA__default__fired(void )
#line 188
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareA__fired(void ){
#line 49
  HplAtm128Timer3P__CompareA__default__fired();
#line 49
}
#line 49
# 192 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareB__default__fired(void )
#line 192
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareB__fired(void ){
#line 49
  HplAtm128Timer3P__CompareB__default__fired();
#line 49
}
#line 49
# 196 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareC__default__fired(void )
#line 196
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareC__fired(void ){
#line 49
  HplAtm128Timer3P__CompareC__default__fired();
#line 49
}
#line 49
# 200 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time)
#line 200
{
}

# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t){
#line 51
  HplAtm128Timer3P__Capture__default__captured(t);
#line 51
}
#line 51
# 216 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 71
  /*CC1000CsmaRadioC.CTLT*/CounterToLocalTimeC__1__Counter__overflow();
#line 71
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 71
  /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void )
#line 51
{
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer3P__Timer__overflow(void ){
#line 61
  /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow();
#line 61
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 61
}
#line 61
# 61 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 250;
}

#line 97
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*PrintfC.QueueC*/QueueC__0__Queue__size() < /*PrintfC.QueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__tail] = newVal;
      /*PrintfC.QueueC*/QueueC__0__tail++;
      if (/*PrintfC.QueueC*/QueueC__0__tail == 250) {
#line 102
        /*PrintfC.QueueC*/QueueC__0__tail = 0;
        }
#line 103
      /*PrintfC.QueueC*/QueueC__0__size++;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static error_t PrintfP__Queue__enqueue(PrintfP__Queue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void )
#line 46
{
  return * (volatile uint16_t *)(0x04 + 0x20);
}

#line 43
static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void )
#line 43
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)(0x06 + 0x20);
}

#line 108
static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void )
#line 108
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP__HplAtm128Adc__getAdcsra();
#line 112
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 129
      oldSr.adif || oldSr.adsc;

#line 129
      return __nesc_temp;
    }
  }
}

# 141 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP__HplAtm128Adc__cancel(void ){
#line 141
  unsigned char __nesc_result;
#line 141

#line 141
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__cancel();
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 242 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 243
{
  return FALSE;
}

# 110 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = Atm128AdcP__Atm128AdcMultiple__default__dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 73 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void )
#line 73
{
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 7);
  HplAtm128AdcP__McuPowerState__update();
}

# 77 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableAdc(void ){
#line 77
  HplAtm128AdcP__HplAtm128Adc__disableAdc();
#line 77
}
#line 77
# 109 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__stop(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  Atm128AdcP__HplAtm128Adc__disableAdc();

  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = Atm128AdcP__AsyncStdControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 74 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 74
{
}

# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 52
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 52
}
#line 52
# 69 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 215 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 215
{
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x40acc1b8){
#line 55
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x40acc1b8);
#line 55
}
#line 55
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 47
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 69
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 69
{
  int i;

  /* atomic removed: atomic calls only */
#line 71
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 75
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 78
              i;

#line 78
              return __nesc_temp;
            }
          }
#line 80
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 83
    {
      unsigned char __nesc_temp = 
#line 83
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 83
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 56 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 56
{
  int i;

  /* atomic removed: atomic calls only */
#line 58
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 60
          FALSE;

#line 60
          return __nesc_temp;
        }
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      TRUE;

#line 61
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 108
{
  /* atomic removed: atomic calls only */
#line 109
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == id) {
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__NO_RES;
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
#line 124
          SUCCESS;

#line 124
          return __nesc_temp;
        }
      }
  }
#line 127
  return FAIL;
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t CC1000RssiP__Resource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__HAL_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 89 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP__startNextOp(void )
#line 89
{
  CC1000RssiP__currentOp = CC1000RssiP__nextOp;
  if (CC1000RssiP__nextOp != CC1000RssiP__IDLE) 
    {
      CC1000RssiP__nextOp = CC1000RssiP__IDLE;
      CC1000RssiP__ActualRssi__read();
    }
  else {
    CC1000RssiP__Resource__release();
    }
}

# 61 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP__ByteRadio__listen(void ){
#line 61
  CC1000SendReceiveP__ByteRadio__listen();
#line 61
}
#line 61
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t CC1000CsmaP__adjustSquelch__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC1000CsmaP__adjustSquelch);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 46 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000Squelch.nc"
inline static uint16_t CC1000CsmaP__CC1000Squelch__get(void ){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = CC1000SquelchP__CC1000Squelch__get();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 351 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__RssiPulseCheck__readDone(error_t result, uint16_t data)
#line 351
{
  if (result != SUCCESS) 
    {

      CC1000CsmaP__sleepCheck__postTask();
      return;
    }






  if (data > CC1000CsmaP__CC1000Squelch__get() - (CC1000CsmaP__CC1000Squelch__get() >> 2)) 
    {
      CC1000CsmaP__sleepCheck__postTask();

      if (data < CC1000CsmaP__CC1000Squelch__get() + (CC1000CsmaP__CC1000Squelch__get() >> 3)) 
        {

          CC1000CsmaP__rssiForSquelch = data;
          CC1000CsmaP__adjustSquelch__postTask();
        }
    }
  else {
#line 375
    if (CC1000CsmaP__count++ > 5) 
      {

        CC1000CsmaP__enterIdleStateSetWakeup();
        printf("%lu | IDLE_STATE\n", CC1000CsmaP__getLocalTime());
        printfflush();
        CC1000CsmaP__ByteRadio__listen();
      }
    else 
      {
        CC1000CsmaP__RssiPulseCheck__read();
        CC1000CsmaP__BusyWait__wait(80);
      }
    }
}

# 200 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__enterTxPreambleState(void )
#line 200
{
  CC1000SendReceiveP__radioState = CC1000SendReceiveP__TXPREAMBLE_STATE;
  CC1000SendReceiveP__count = 0;
  CC1000SendReceiveP__runningCrc = 0;
  CC1000SendReceiveP__nextTxByte = 0xaa;
}

#line 289
static inline void CC1000SendReceiveP__ByteRadio__cts(void )
#line 289
{

  CC1000SendReceiveP__enterTxPreambleState();
  CC1000SendReceiveP__HplCC1000Spi__writeByte(0xaa);
  CC1000SendReceiveP__CC1000Control__txMode();
  CC1000SendReceiveP__HplCC1000Spi__txMode();
}

# 32 "/opt/tinyos-2.1.1/tos/chips/cc1000/ByteRadio.nc"
inline static void CC1000CsmaP__ByteRadio__cts(void ){
#line 32
  CC1000SendReceiveP__ByteRadio__cts();
#line 32
}
#line 32
# 156 "CC1000CsmaP.nc"
static inline void CC1000CsmaP__enterTxState(void )
#line 156
{
  CC1000CsmaP__radioState = CC1000CsmaP__TX_STATE;
}

#line 434
static inline void CC1000CsmaP__RssiCheckChannel__readDone(error_t result, uint16_t data)
#line 434
{
  if (result != SUCCESS) 
    {
      /* atomic removed: atomic calls only */
      CC1000CsmaP__macDelay = 1;
      return;
    }

  CC1000CsmaP__count++;
  if (data > CC1000CsmaP__CC1000Squelch__get() + CC1K_SquelchBuffer) {
    CC1000CsmaP__clearCount++;
    }
  else {
#line 446
    CC1000CsmaP__clearCount = 0;
    }

  if (CC1000CsmaP__clearCount >= 1 || CC1000CsmaP__f.ccaOff) 
    {
      CC1000CsmaP__enterTxState();
      printf("%lu | TX_STATE\n", CC1000CsmaP__getLocalTime());
      printfflush();
      CC1000CsmaP__ByteRadio__cts();
    }
  else {
#line 456
    if (CC1000CsmaP__count == CC1K_MaxRSSISamples) {
      CC1000CsmaP__congestion();
      }
    else {
#line 459
      CC1000CsmaP__RssiCheckChannel__read();
      }
    }
}

#line 489
static inline void CC1000CsmaP__RssiNoiseFloor__readDone(error_t result, uint16_t data)
#line 489
{
  if (result != SUCCESS) 
    {

      CC1000CsmaP__sleepCheck__postTask();
      return;
    }

  CC1000CsmaP__rssiForSquelch = data;
  CC1000CsmaP__adjustSquelch__postTask();
  CC1000CsmaP__sleepCheck__postTask();
}

# 511 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static inline void CC1000SendReceiveP__RssiRx__readDone(error_t result, uint16_t data)
#line 511
{
  cc1000_metadata_t *rxMetadata = CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__rxBufPtr);

  if (result != SUCCESS) {
    __nesc_hton_int16(rxMetadata->strength_or_preamble.data, 0);
    }
  else {
#line 517
    __nesc_hton_int16(rxMetadata->strength_or_preamble.data, data);
    }
}

# 109 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP__Rssi__default__readDone(uint8_t reason, error_t result, uint16_t data)
#line 109
{
}

# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
inline static void CC1000RssiP__Rssi__readDone(uint8_t arg_0x409e6da0, error_t result, CC1000RssiP__Rssi__val_t val){
#line 66
  switch (arg_0x409e6da0) {
#line 66
    case 0U:
#line 66
      CC1000SendReceiveP__RssiRx__readDone(result, val);
#line 66
      break;
#line 66
    case 1U:
#line 66
      CC1000CsmaP__RssiNoiseFloor__readDone(result, val);
#line 66
      break;
#line 66
    case 2U:
#line 66
      CC1000CsmaP__RssiCheckChannel__readDone(result, val);
#line 66
      break;
#line 66
    case 3U:
#line 66
      CC1000CsmaP__RssiPulseCheck__readDone(result, val);
#line 66
      break;
#line 66
    default:
#line 66
      CC1000RssiP__Rssi__default__readDone(arg_0x409e6da0, result, val);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 100 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000RssiP.nc"
static inline void CC1000RssiP__ActualRssi__readDone(error_t result, uint16_t data)
#line 100
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {

      CC1000RssiP__Rssi__readDone(CC1000RssiP__currentOp, result, data);
      CC1000RssiP__startNextOp();
    }
#line 106
    __nesc_atomic_end(__nesc_atomic); }
}

# 150 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 66 "/opt/tinyos-2.1.1/tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x40b02088, error_t result, AdcP__ReadNow__val_t val){
#line 66
  switch (arg_0x40b02088) {
#line 66
    case /*HplCC1000C.RssiChannel*/AdcReadNowClientC__0__ID:
#line 66
      CC1000RssiP__ActualRssi__readDone(result, val);
#line 66
      break;
#line 66
    default:
#line 66
      AdcP__ReadNow__default__readDone(arg_0x40b02088, result, val);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP__acquiredData__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcP__acquiredData);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 108 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise)
#line 108
{
  switch (AdcP__state) 
    {
      case AdcP__ACQUIRE_DATA: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__val = data;
            AdcP__acquiredData__postTask();
          }
      break;

      case AdcP__ACQUIRE_DATA_NOW: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__state = AdcP__IDLE;
            AdcP__ReadNow__readDone(AdcP__client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 72 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise){
#line 72
  AdcP__Atm128AdcSingle__dataReady(data, precise);
#line 72
}
#line 72
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void )
#line 78
{
#line 78
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 3);
}

# 86 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableInterruption(void ){
#line 86
  HplAtm128AdcP__HplAtm128Adc__disableInterruption();
#line 86
}
#line 86
# 124 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data)
#line 124
{
  bool precise;
#line 125
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP__f.channel;
      precise = Atm128AdcP__f.precise;
      multiple = Atm128AdcP__f.multiple;
    }
#line 133
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP__HplAtm128Adc__disableInterruption();
      Atm128AdcP__Atm128AdcSingle__dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 152
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP__HplAtm128Adc__getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 160
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP__Atm128AdcMultiple__dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP__HplAtm128Adc__setAdmux(admux);

            Atm128AdcP__f = Atm128AdcP__nextF;
            Atm128AdcP__nextF.channel = nextChannel;
            Atm128AdcP__nextF.precise = Atm128AdcP__isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP__HplAtm128Adc__cancel();
          }
#line 180
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 147 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data){
#line 147
  Atm128AdcP__HplAtm128Adc__dataReady(data);
#line 147
}
#line 147
# 140 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void )
#line 140
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 71
}
#line 71
# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 82
{
   __asm volatile ("sei");}

# 132 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 132
{
#line 132
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 149 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 49
}
#line 49
# 230 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer__overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 61
}
#line 61
# 194 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__default__fired(void )
#line 194
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareA__fired(void ){
#line 49
  HplAtm128Timer1P__CompareA__default__fired();
#line 49
}
#line 49
# 198 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareB__default__fired(void )
#line 198
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareB__fired(void ){
#line 49
  HplAtm128Timer1P__CompareB__default__fired();
#line 49
}
#line 49
# 202 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareC__default__fired(void )
#line 202
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareC__fired(void ){
#line 49
  HplAtm128Timer1P__CompareC__default__fired();
#line 49
}
#line 49
# 206 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__default__captured(uint16_t time)
#line 206
{
}

# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t){
#line 51
  HplAtm128Timer1P__Capture__default__captured(t);
#line 51
}
#line 51
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__overflow(void )
{
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform32*/TransformCounterC__1__Counter__overflow(void ){
#line 71
  /*CC1000CsmaRadioC.CounterToLocalTimeC*/CounterToLocalTimeC__2__Counter__overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__1__m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC__1__m_upper & /*Counter32khz32C.Transform32*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC__1__Counter__overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__overflow(void ){
#line 71
  /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__1__Counter__overflow();
}

# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__overflow(void )
#line 51
{
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer1P__Timer__overflow(void ){
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC__1__Timer__overflow();
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC__1__Timer__overflow();
#line 61
}
#line 61
# 62 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 62
{
  register uint8_t temp = * (volatile uint8_t *)(0x0F + 0x20);

#line 64
  * (volatile uint8_t *)(0x0F + 0x20) = HplCC1000SpiP__outgoingByte;
  HplCC1000SpiP__HplCC1000Spi__dataReady(temp);
}

# 69 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__1__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__1__Counter__get(void )
{
  /*Counter32khz32C.Transform32*/TransformCounterC__1__to_size_type rv = 0;

  /* atomic removed: atomic calls only */
#line 73
  {
    /*Counter32khz32C.Transform32*/TransformCounterC__1__upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC__1__m_upper;
    /*Counter32khz32C.Transform32*/TransformCounterC__1__from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__get();

#line 76
    if (/*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
      {






        high++;
        low = /*Counter32khz32C.Transform32*/TransformCounterC__1__CounterFrom__get();
      }
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__1__to_size_type high_to = high;
      /*Counter32khz32C.Transform32*/TransformCounterC__1__to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC__1__LOW_SHIFT_RIGHT;

#line 90
      rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
    }
  }
  return rv;
}

# 770 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static uint8_t CC1000SendReceiveP__PacketTimeSyncOffset__get(message_t *msg)
{
  return sizeof(cc1000_header_t ) + __nesc_ntoh_uint8(CC1000SendReceiveP__getHeader(msg)->length.data) - sizeof(timesync_radio_t );
}

# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 325 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP__CC1000Control__rxMode(void )
#line 325
{


  CC1000ControlP__CC__write(CC1K_CURRENT, CC1000ControlP__rxCurrent);
  CC1000ControlP__CC__write(CC1K_PA_POW, 0);
  CC1000ControlP__CC__write(CC1K_MAIN, (1 << CC1K_TX_PD) | (1 << CC1K_RESET_N));
  CC1000ControlP__BusyWait__wait(125);
}

# 94 "/opt/tinyos-2.1.1/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static void HplCC1000P__HplCC1000__write(uint8_t addr, uint8_t data)
#line 94
{
  char cnt = 0;


  addr <<= 1;
  HplCC1000P__PALE__clr();
  for (cnt = 0; cnt < 7; cnt++) 
    {
      if (addr & 0x80) {
        HplCC1000P__PDATA__set();
        }
      else {
#line 105
        HplCC1000P__PDATA__clr();
        }
#line 106
      HplCC1000P__PCLK__clr();
      HplCC1000P__PCLK__set();
      addr <<= 1;
    }
  HplCC1000P__PDATA__set();
  HplCC1000P__PCLK__clr();
  HplCC1000P__PCLK__set();

  HplCC1000P__PALE__set();


  for (cnt = 0; cnt < 8; cnt++) 
    {
      if (data & 0x80) {
        HplCC1000P__PDATA__set();
        }
      else {
#line 122
        HplCC1000P__PDATA__clr();
        }
#line 123
      HplCC1000P__PCLK__clr();
      HplCC1000P__PCLK__set();
      data <<= 1;
    }
  HplCC1000P__PALE__set();
  HplCC1000P__PDATA__set();
  HplCC1000P__PCLK__set();
}

# 159 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 118 "CC1000CsmaP.nc"
static uint32_t CC1000CsmaP__getLocalTime(void )
#line 118
{
  uint32_t l_time = 0;

  l_time = CC1000CsmaP__LTime__get() / 1000;

  return l_time;
}

# 143 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
  int printfflush(void )
#line 143
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 144
    {
      if (PrintfP__state == PrintfP__S_FLUSHING) 
        {
          int __nesc_temp = 
#line 146
          SUCCESS;

          {
#line 146
            __nesc_atomic_end(__nesc_atomic); 
#line 146
            return __nesc_temp;
          }
        }
#line 147
      if (PrintfP__Queue__empty()) 
        {
          int __nesc_temp = 
#line 148
          FAIL;

          {
#line 148
            __nesc_atomic_end(__nesc_atomic); 
#line 148
            return __nesc_temp;
          }
        }
#line 149
      PrintfP__state = PrintfP__S_FLUSHING;
    }
#line 150
    __nesc_atomic_end(__nesc_atomic); }
  PrintfP__sendNext();
  return SUCCESS;
}

#line 132
static void PrintfP__sendNext(void )
#line 132
{
  int i;
  printf_msg_t *m = (printf_msg_t *)PrintfP__Packet__getPayload(&PrintfP__printfMsg, sizeof(printf_msg_t ));
  uint16_t length_to_send = PrintfP__Queue__size() < sizeof(printf_msg_t ) ? PrintfP__Queue__size() : sizeof(printf_msg_t );

#line 136
  memset(m->buffer, 0, sizeof(printf_msg_t ));
  for (i = 0; i < length_to_send; i++) 
    __nesc_hton_uint8(m->buffer[i].data, PrintfP__Queue__dequeue());
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 124 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 124
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 100);
  return /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 161 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 161
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 163
  return __nesc_ntoh_uint8(header->type.data);
}

#line 137
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 137
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 139
  return __nesc_ntoh_uint16(header->dest.data);
}

#line 57
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 59
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.data, dest);





  __nesc_hton_uint8(header->type.data, id);
  __nesc_hton_uint8(header->length.data, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 502 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 502
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 503
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 509
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 62
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC__seed = mlcg;
  }
  return mlcg;
}

# 75 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000RssiP.nc"
static error_t CC1000RssiP__Rssi__read(uint8_t reason)
#line 75
{
  if (CC1000RssiP__currentOp == CC1000RssiP__IDLE) 
    {
      CC1000RssiP__currentOp = reason;
      if (CC1000RssiP__Resource__immediateRequest() == SUCCESS) {
        CC1000RssiP__ActualRssi__read();
        }
      else {
#line 82
        CC1000RssiP__Resource__request();
        }
    }
  else {
#line 85
    CC1000RssiP__nextOp = reason;
    }
#line 86
  return SUCCESS;
}

# 130 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 130
{
  /* atomic removed: atomic calls only */
#line 131
  {
    if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id) {
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
            {
              unsigned char __nesc_temp = 
#line 135
              SUCCESS;

#line 135
              return __nesc_temp;
            }
          }
        else {
#line 137
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 140
                SUCCESS;

#line 140
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 144
  return FAIL;
}

# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/AdcP.nc"
static void AdcP__sample(void )
#line 82
{
  AdcP__Atm128AdcSingle__getData(AdcP__channel(), AdcP__refVoltage(), FALSE, AdcP__prescaler());
}

# 65 "/opt/tinyos-2.1.1/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 65
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 471 "CC1000CsmaP.nc"
static void CC1000CsmaP__ByteRadio__rxDone(void )
#line 471
{
  if (CC1000CsmaP__radioState == CC1000CsmaP__RX_STATE) {
      CC1000CsmaP__enterIdleStateSetWakeup();
      printf("%lu | IDLE_STATE\n", CC1000CsmaP__getLocalTime());
      printfflush();
    }
}

# 95 "/opt/tinyos-2.1.1/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC__addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 311 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP__CC1000Control__txMode(void )
#line 311
{

  CC1000ControlP__CC__write(CC1K_MAIN, (((
  1 << CC1K_RXTX) | (
  1 << CC1K_F_REG)) | (
  1 << CC1K_RX_PD)) | (
  1 << CC1K_RESET_N));

  CC1000ControlP__CC__write(CC1K_CURRENT, CC1000ControlP__txCurrent);
  CC1000ControlP__BusyWait__wait(250);
  CC1000ControlP__CC__write(CC1K_PA_POW, CC1000ControlP__power);
  CC1000ControlP__BusyWait__wait(20);
}

# 605 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static void CC1000SendReceiveP__packetReceiveDone(void )
#line 605
{
  unsigned char *__nesc_temp46;
  unsigned char *__nesc_temp45;
#line 606
  uint16_t snr;

  snr = (uint16_t )__nesc_ntoh_int16(CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__rxBufPtr)->strength_or_preamble.data);


  if (snr + CC1000_WHITE_BIT_THRESH < CC1000SendReceiveP__CC1000Squelch__get()) {
      (__nesc_temp45 = CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__rxBufPtr)->metadataBits.data, __nesc_hton_uint8(__nesc_temp45, __nesc_ntoh_uint8(__nesc_temp45) | CC1000_WHITE_BIT));
    }
  else {
      (__nesc_temp46 = CC1000SendReceiveP__getMetadata(CC1000SendReceiveP__rxBufPtr)->metadataBits.data, __nesc_hton_uint8(__nesc_temp46, __nesc_ntoh_uint8(__nesc_temp46) & ~CC1000_WHITE_BIT));
    }

  CC1000SendReceiveP__signalPacketReceived__postTask();
  CC1000SendReceiveP__enterReceivedState();
}

# 52 "/opt/tinyos-2.1.1/tos/system/RealMainP.nc"
  int main(void )
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 123 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 164
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x403602b0){
#line 64
  switch (arg_0x403602b0) {
#line 64
    case SerialP__RunTx:
#line 64
      SerialP__RunTx__runTask();
#line 64
      break;
#line 64
    case SerialP__startDoneTask:
#line 64
      SerialP__startDoneTask__runTask();
#line 64
      break;
#line 64
    case SerialP__stopDoneTask:
#line 64
      SerialP__stopDoneTask__runTask();
#line 64
      break;
#line 64
    case SerialP__defaultSerialFlushTask:
#line 64
      SerialP__defaultSerialFlushTask__runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 64
      break;
#line 64
    case PrintfP__retrySend:
#line 64
      PrintfP__retrySend__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask();
#line 64
      break;
#line 64
    case CC1000CsmaP__setWakeupTask:
#line 64
      CC1000CsmaP__setWakeupTask__runTask();
#line 64
      break;
#line 64
    case CC1000CsmaP__startStopDone:
#line 64
      CC1000CsmaP__startStopDone__runTask();
#line 64
      break;
#line 64
    case CC1000CsmaP__sleepCheck:
#line 64
      CC1000CsmaP__sleepCheck__runTask();
#line 64
      break;
#line 64
    case CC1000CsmaP__adjustSquelch:
#line 64
      CC1000CsmaP__adjustSquelch__runTask();
#line 64
      break;
#line 64
    case CC1000SendReceiveP__signalPacketSent:
#line 64
      CC1000SendReceiveP__signalPacketSent__runTask();
#line 64
      break;
#line 64
    case CC1000SendReceiveP__signalPacketReceived:
#line 64
      CC1000SendReceiveP__signalPacketReceived__runTask();
#line 64
      break;
#line 64
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 64
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 64
      break;
#line 64
    case AdcP__acquiredData:
#line 64
      AdcP__acquiredData__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x403602b0);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 161 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 77 "OMACC.nc"
static void OMACC__sendMessage(message_t *msg)
#line 77
{
  radio_temp_packet_t *pay;

#line 79
  pay = (radio_temp_packet_t *)OMACC__AMSend__getPayload(msg, 6);
  __nesc_hton_int16(pay->isPreamble.data, 0);
  __nesc_hton_int16(pay->hop_from_sink.data, OMACC__myHop);
  __nesc_hton_int16(pay->data.data, OMACC__temp);
  OMACC__LPL__setRemoteWakeupInterval(msg, OMACC__getParentSleepTime());
  OMACC__AMSend__send(AM_BROADCAST_ADDR, msg, sizeof(radio_temp_packet_t ));
  OMACC__Leds__led1Toggle();
}

# 562 "CC1000CsmaP.nc"
static void CC1000CsmaP__LowPowerListening__setRemoteWakeupInterval(message_t *msg, uint16_t sleepIntervalMs)
#line 562
{
  cc1000_metadata_t *meta = CC1000CsmaP__getMetadata(msg);

  __nesc_hton_int16(meta->strength_or_preamble.data, - (int16_t )CC1000CsmaP__validateSleepInterval(sleepIntervalMs) - 1);
}

#line 530
static uint16_t CC1000CsmaP__validateSleepInterval(uint16_t sleepIntervalMs)
#line 530
{
  if (sleepIntervalMs < CC1K_LPL_MIN_INTERVAL) {
    return 0;
    }
  else {
#line 533
    if (sleepIntervalMs > CC1K_LPL_MAX_INTERVAL) {
      return CC1K_LPL_MAX_INTERVAL;
      }
    else {
#line 536
      return sleepIntervalMs;
      }
    }
}

# 133 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ActiveMessageP.nc"
static am_id_t CC1000ActiveMessageP__AMPacket__type(message_t *amsg)
#line 133
{
  cc1000_header_t *header = CC1000ActiveMessageP__getHeader(amsg);

#line 135
  return __nesc_ntoh_uint8(header->type.data);
}

#line 108
static am_addr_t CC1000ActiveMessageP__AMPacket__destination(message_t *amsg)
#line 108
{
  cc1000_header_t *header = CC1000ActiveMessageP__getHeader(amsg);

#line 110
  return __nesc_ntoh_uint16(header->dest.data);
}

#line 62
static error_t CC1000ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 64
{
  cc1000_header_t *header = CC1000ActiveMessageP__getHeader(amsg);

#line 66
  __nesc_hton_uint8(header->type.data, id);
  __nesc_hton_uint16(header->dest.data, addr);
  __nesc_hton_uint16(header->source.data, CC1000ActiveMessageP__AMPacket__address());
  __nesc_hton_uint8(header->group.data, TOS_AM_GROUP);
  return CC1000ActiveMessageP__SubSend__send(amsg, len);
}

# 235 "CC1000CsmaP.nc"
static void CC1000CsmaP__setWakeup(void )
#line 235
{
  switch (CC1000CsmaP__radioState) 
    {
      case CC1000CsmaP__IDLE_STATE: 




        if (!CC1000CsmaP__WakeupTimer__isRunning()) {
          if (CC1000CsmaP__CC1000Squelch__settled()) 
            {
              if (CC1000CsmaP__sleepTime == 0) {
                CC1000CsmaP__WakeupTimer__startOneShot(CC1K_SquelchIntervalSlow);
                }
              else {

                CC1000CsmaP__WakeupTimer__startOneShot(CC1000CsmaP__TIME_AFTER_CHECK);
                }
            }
          else {
#line 254
            CC1000CsmaP__WakeupTimer__startOneShot(CC1K_SquelchIntervalFast);
            }
          }
#line 255
      break;
      case CC1000CsmaP__PULSECHECK_STATE: 

        CC1000CsmaP__WakeupTimer__startOneShot(1);
      break;
      case CC1000CsmaP__POWERDOWN_STATE: 

        CC1000CsmaP__WakeupTimer__startOneShot(CC1000CsmaP__sleepTime);
      break;
    }
}

# 148 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

#line 133
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 212 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 166 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask();
        }
    }
}

# 353 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP__CC1000Control__off(void )
#line 353
{

  CC1000ControlP__CC__write(CC1K_MAIN, (((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_CORE_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
  CC1000ControlP__CC__write(CC1K_PA_POW, 0);
}

# 162 "CC1000CsmaP.nc"
static void CC1000CsmaP__radioOn(void )
#line 162
{
  CC1000CsmaP__CC1000Control__coreOn();
  CC1000CsmaP__BusyWait__wait(2000);
  CC1000CsmaP__CC1000Control__biasOn();
  CC1000CsmaP__BusyWait__wait(200);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    CC1000CsmaP__ByteRadio__listen();
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 429 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000SendReceiveP.nc"
static void CC1000SendReceiveP__ByteRadio__listen(void )
#line 429
{
  CC1000SendReceiveP__enterListenState();
  CC1000SendReceiveP__CC1000Control__rxMode();
  CC1000SendReceiveP__HplCC1000Spi__rxMode();
  CC1000SendReceiveP__HplCC1000Spi__enableIntr();
}

# 198 "CC1000CsmaP.nc"
static error_t CC1000CsmaP__SplitControl__start(void )
#line 198
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    if (CC1000CsmaP__radioState == CC1000CsmaP__DISABLED_STATE) 
      {
        CC1000CsmaP__ByteRadioControl__start();
        CC1000CsmaP__enterIdleStateSetWakeup();
        CC1000CsmaP__f.txPending = FALSE;
      }
    else 
      {
        unsigned char __nesc_temp = 
#line 207
        SUCCESS;

        {
#line 207
          __nesc_atomic_end(__nesc_atomic); 
#line 207
          return __nesc_temp;
        }
      }
#line 209
    __nesc_atomic_end(__nesc_atomic); }
#line 208
  printf("%lu | IDLE_STATE\n", CC1000CsmaP__getLocalTime());
  printfflush();
  CC1000CsmaP__radioOn();

  CC1000CsmaP__startStopDone__postTask();

  return SUCCESS;
}

# 155 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error)
#line 155
{
  if (error == SUCCESS) {
      if (PrintfP__Queue__size() > 0) {
        PrintfP__sendNext();
        }
      else {
#line 159
        PrintfP__state = PrintfP__S_STARTED;
        }
    }
  else {
#line 161
    PrintfP__retrySend__postTask();
    }
}

# 155 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

# 347 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 347
{
  bool turnOff = FALSE;

#line 349
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
      SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
        SerialP__offPending = FALSE;
#line 357
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
        SerialP__offPending = TRUE;
#line 360
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 86 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 86
{
  HdlcTranslateC__state.sendEscape = 0;
  HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 155 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 164 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 164
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    {
      * (volatile uint8_t *)(0x0C + 0x20) = data;
      * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
}

# 90 "/opt/tinyos-2.1.1/tos/chips/cc1000/CC1000ControlP.nc"
static void CC1000ControlP__calibrateNow(void )
#line 90
{

  CC1000ControlP__CC__write(CC1K_CAL, ((
  1 << CC1K_CAL_START) | (
  1 << CC1K_CAL_WAIT)) | (
  6 << CC1K_CAL_ITERATE));
  while ((CC1000ControlP__CC__read(CC1K_CAL) & (1 << CC1K_CAL_COMPLETE)) == 0) 
    ;


  CC1000ControlP__CC__write(CC1K_CAL, (1 << CC1K_CAL_WAIT) | (6 << CC1K_CAL_ITERATE));
}

# 171 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_18(void )
#line 171
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
}

# 402 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 402
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        goto nosync;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 285 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 285
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 287
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 297
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 177 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_20(void )
#line 177
{
  HplAtm128UartP__HplUart0__txDone();
}

# 92 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 92
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 265 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_30(void )
#line 265
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0x9C);
    }
}

#line 270
__attribute((interrupt))   void __vector_32(void )
#line 270
{
  HplAtm128UartP__HplUart1__txDone();
}

# 189 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
__attribute((interrupt))   void __vector_26(void )
#line 189
{
  HplAtm128Timer3P__CompareA__fired();
}

__attribute((interrupt))   void __vector_27(void )
#line 193
{
  HplAtm128Timer3P__CompareB__fired();
}

__attribute((interrupt))   void __vector_28(void )
#line 197
{
  HplAtm128Timer3P__CompareC__fired();
}

__attribute((interrupt))   void __vector_25(void )
#line 201
{
  HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Timer__get());
}

__attribute((interrupt))   void __vector_29(void )
#line 205
{
  HplAtm128Timer3P__Timer__overflow();
}

# 168 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
__attribute((noinline))   int uart_putchar(char c, struct __file *stream)
#line 168
{








  if (PrintfP__state == PrintfP__S_STARTED && PrintfP__Queue__size() >= 250 / 2) {
      PrintfP__state = PrintfP__S_FLUSHING;
      PrintfP__sendNext();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 181
    {
      if (PrintfP__Queue__enqueue(c) == SUCCESS) 
        {
          int __nesc_temp = 
#line 183
          0;

          {
#line 183
            __nesc_atomic_end(__nesc_atomic); 
#line 183
            return __nesc_temp;
          }
        }
      else 
#line 184
        {
          int __nesc_temp = 
#line 184
          -1;

          {
#line 184
            __nesc_atomic_end(__nesc_atomic); 
#line 184
            return __nesc_temp;
          }
        }
    }
#line 187
    __nesc_atomic_end(__nesc_atomic); }
}

# 99 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_21(void )
#line 99
{
  uint16_t data = HplAtm128AdcP__HplAtm128Adc__getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP__HplAtm128Adc__dataReady(data);
}

# 178 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 178
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_16(void )
#line 184
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Timer__overflow();
}

# 195 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void )
#line 195
{
  HplAtm128Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_13(void )
#line 199
{
  HplAtm128Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_24(void )
#line 203
{
  HplAtm128Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_11(void )
#line 207
{
  HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Timer__get());
}

__attribute((interrupt))   void __vector_14(void )
#line 211
{
  HplAtm128Timer1P__Timer__overflow();
}

