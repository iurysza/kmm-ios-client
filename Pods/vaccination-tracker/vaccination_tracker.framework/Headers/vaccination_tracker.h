#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Vaccination_trackerDatabaseDriverFactory, Vaccination_trackerVaccinationDataResponseItem, Vaccination_trackerCovidVaccinationData, Vaccination_trackerAverage14days, Vaccination_trackerAverage7days, Vaccination_trackerDailyVaccinations, Vaccination_trackerTotalVaccinations, Vaccination_trackerVaccinations, Vaccination_trackerRuntimeQuery<__covariant RowType>, Vaccination_trackerKotlinThrowable, Vaccination_trackerKotlinArray<T>, Vaccination_trackerKotlinException, Vaccination_trackerKotlinRuntimeException, Vaccination_trackerKotlinIllegalStateException, Vaccination_trackerRuntimeTransacterTransaction, Vaccination_trackerKotlinx_serialization_coreSerializersModule, Vaccination_trackerKotlinx_serialization_coreSerialKind, Vaccination_trackerKotlinNothing, Vaccination_trackerKotlinByteArray, Vaccination_trackerKotlinByteIterator;

@protocol Vaccination_trackerKotlinx_serialization_coreKSerializer, Vaccination_trackerCovidVaccinationDatabaseQueries, Vaccination_trackerRuntimeTransactionWithoutReturn, Vaccination_trackerRuntimeTransactionWithReturn, Vaccination_trackerRuntimeTransacter, Vaccination_trackerCovidVaccinationDatabase, Vaccination_trackerRuntimeSqlDriver, Vaccination_trackerRuntimeSqlDriverSchema, Vaccination_trackerKotlinx_serialization_coreEncoder, Vaccination_trackerKotlinx_serialization_coreSerialDescriptor, Vaccination_trackerKotlinx_serialization_coreSerializationStrategy, Vaccination_trackerKotlinx_serialization_coreDecoder, Vaccination_trackerKotlinx_serialization_coreDeserializationStrategy, Vaccination_trackerRuntimeTransactionCallbacks, Vaccination_trackerRuntimeSqlPreparedStatement, Vaccination_trackerRuntimeSqlCursor, Vaccination_trackerRuntimeCloseable, Vaccination_trackerRuntimeQueryListener, Vaccination_trackerKotlinIterator, Vaccination_trackerKotlinx_serialization_coreCompositeEncoder, Vaccination_trackerKotlinAnnotation, Vaccination_trackerKotlinx_serialization_coreCompositeDecoder, Vaccination_trackerKotlinx_serialization_coreSerializersModuleCollector, Vaccination_trackerKotlinKClass, Vaccination_trackerKotlinKDeclarationContainer, Vaccination_trackerKotlinKAnnotatedElement, Vaccination_trackerKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface Vaccination_trackerBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface Vaccination_trackerBase (Vaccination_trackerBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface Vaccination_trackerMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Vaccination_trackerMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorVaccination_trackerKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface Vaccination_trackerNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface Vaccination_trackerByte : Vaccination_trackerNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface Vaccination_trackerUByte : Vaccination_trackerNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface Vaccination_trackerShort : Vaccination_trackerNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface Vaccination_trackerUShort : Vaccination_trackerNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface Vaccination_trackerInt : Vaccination_trackerNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface Vaccination_trackerUInt : Vaccination_trackerNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface Vaccination_trackerLong : Vaccination_trackerNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface Vaccination_trackerULong : Vaccination_trackerNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface Vaccination_trackerFloat : Vaccination_trackerNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface Vaccination_trackerDouble : Vaccination_trackerNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface Vaccination_trackerBoolean : Vaccination_trackerNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VaccinationTracker")))
@interface Vaccination_trackerVaccinationTracker : Vaccination_trackerBase
- (instancetype)initWithDatabaseDriverFactory:(Vaccination_trackerDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("init(databaseDriverFactory:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFullVaccinationDataWithCompletionHandler:(void (^)(NSArray<Vaccination_trackerVaccinationDataResponseItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFullVaccinationData(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVaccinationDataLatest:(BOOL)latest completionHandler:(void (^)(NSArray<Vaccination_trackerCovidVaccinationData *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVaccinationData(latest:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Average14days")))
@interface Vaccination_trackerAverage14days : Vaccination_trackerBase
- (instancetype)initWithSingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose perMillion:(int32_t)perMillion total:(int32_t)total __attribute__((swift_name("init(singleDose:firstDose:secondDose:perMillion:total:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (Vaccination_trackerAverage14days *)doCopySingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose perMillion:(int32_t)perMillion total:(int32_t)total __attribute__((swift_name("doCopy(singleDose:firstDose:secondDose:perMillion:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t firstDose __attribute__((swift_name("firstDose")));
@property (readonly) int32_t perMillion __attribute__((swift_name("perMillion")));
@property (readonly) int32_t secondDose __attribute__((swift_name("secondDose")));
@property (readonly) int32_t singleDose __attribute__((swift_name("singleDose")));
@property (readonly) int32_t total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Average14days.Companion")))
@interface Vaccination_trackerAverage14daysCompanion : Vaccination_trackerBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Vaccination_trackerKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Average7days")))
@interface Vaccination_trackerAverage7days : Vaccination_trackerBase
- (instancetype)initWithSingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose perMillion:(int32_t)perMillion total:(int32_t)total __attribute__((swift_name("init(singleDose:firstDose:secondDose:perMillion:total:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (Vaccination_trackerAverage7days *)doCopySingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose perMillion:(int32_t)perMillion total:(int32_t)total __attribute__((swift_name("doCopy(singleDose:firstDose:secondDose:perMillion:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t firstDose __attribute__((swift_name("firstDose")));
@property (readonly) int32_t perMillion __attribute__((swift_name("perMillion")));
@property (readonly) int32_t secondDose __attribute__((swift_name("secondDose")));
@property (readonly) int32_t singleDose __attribute__((swift_name("singleDose")));
@property (readonly) int32_t total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Average7days.Companion")))
@interface Vaccination_trackerAverage7daysCompanion : Vaccination_trackerBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Vaccination_trackerKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DailyVaccinations")))
@interface Vaccination_trackerDailyVaccinations : Vaccination_trackerBase
- (instancetype)initWithSingleDose:(Vaccination_trackerInt * _Nullable)singleDose firstDose:(Vaccination_trackerInt * _Nullable)firstDose secondDose:(Vaccination_trackerInt * _Nullable)secondDose fullyVaccinated:(Vaccination_trackerInt * _Nullable)fullyVaccinated total:(Vaccination_trackerInt * _Nullable)total __attribute__((swift_name("init(singleDose:firstDose:secondDose:fullyVaccinated:total:)"))) __attribute__((objc_designated_initializer));
- (Vaccination_trackerInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (Vaccination_trackerInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Vaccination_trackerInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (Vaccination_trackerInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (Vaccination_trackerInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (Vaccination_trackerDailyVaccinations *)doCopySingleDose:(Vaccination_trackerInt * _Nullable)singleDose firstDose:(Vaccination_trackerInt * _Nullable)firstDose secondDose:(Vaccination_trackerInt * _Nullable)secondDose fullyVaccinated:(Vaccination_trackerInt * _Nullable)fullyVaccinated total:(Vaccination_trackerInt * _Nullable)total __attribute__((swift_name("doCopy(singleDose:firstDose:secondDose:fullyVaccinated:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Vaccination_trackerInt * _Nullable firstDose __attribute__((swift_name("firstDose")));
@property (readonly) Vaccination_trackerInt * _Nullable fullyVaccinated __attribute__((swift_name("fullyVaccinated")));
@property (readonly) Vaccination_trackerInt * _Nullable secondDose __attribute__((swift_name("secondDose")));
@property (readonly) Vaccination_trackerInt * _Nullable singleDose __attribute__((swift_name("singleDose")));
@property (readonly) Vaccination_trackerInt * _Nullable total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DailyVaccinations.Companion")))
@interface Vaccination_trackerDailyVaccinationsCompanion : Vaccination_trackerBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Vaccination_trackerKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TotalVaccinations")))
@interface Vaccination_trackerTotalVaccinations : Vaccination_trackerBase
- (instancetype)initWithSingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose fullyVaccinated:(int32_t)fullyVaccinated singleDosePercentage:(double)singleDosePercentage firstDosePercentage:(double)firstDosePercentage secondDosePercentage:(double)secondDosePercentage fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage total:(int32_t)total __attribute__((swift_name("init(singleDose:firstDose:secondDose:fullyVaccinated:singleDosePercentage:firstDosePercentage:secondDosePercentage:fullyVaccinatedPercentage:total:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (double)component7 __attribute__((swift_name("component7()")));
- (double)component8 __attribute__((swift_name("component8()")));
- (int32_t)component9 __attribute__((swift_name("component9()")));
- (Vaccination_trackerTotalVaccinations *)doCopySingleDose:(int32_t)singleDose firstDose:(int32_t)firstDose secondDose:(int32_t)secondDose fullyVaccinated:(int32_t)fullyVaccinated singleDosePercentage:(double)singleDosePercentage firstDosePercentage:(double)firstDosePercentage secondDosePercentage:(double)secondDosePercentage fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage total:(int32_t)total __attribute__((swift_name("doCopy(singleDose:firstDose:secondDose:fullyVaccinated:singleDosePercentage:firstDosePercentage:secondDosePercentage:fullyVaccinatedPercentage:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t firstDose __attribute__((swift_name("firstDose")));
@property (readonly) double firstDosePercentage __attribute__((swift_name("firstDosePercentage")));
@property (readonly) int32_t fullyVaccinated __attribute__((swift_name("fullyVaccinated")));
@property (readonly) double fullyVaccinatedPercentage __attribute__((swift_name("fullyVaccinatedPercentage")));
@property (readonly) int32_t secondDose __attribute__((swift_name("secondDose")));
@property (readonly) double secondDosePercentage __attribute__((swift_name("secondDosePercentage")));
@property (readonly) int32_t singleDose __attribute__((swift_name("singleDose")));
@property (readonly) double singleDosePercentage __attribute__((swift_name("singleDosePercentage")));
@property (readonly) int32_t total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TotalVaccinations.Companion")))
@interface Vaccination_trackerTotalVaccinationsCompanion : Vaccination_trackerBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Vaccination_trackerKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VaccinationDataResponseItem")))
@interface Vaccination_trackerVaccinationDataResponseItem : Vaccination_trackerBase
- (instancetype)initWithAverage14Days:(Vaccination_trackerAverage14days *)average14Days average7Days:(Vaccination_trackerAverage7days *)average7Days dailyVaccinations:(Vaccination_trackerDailyVaccinations *)dailyVaccinations isoCode:(NSString *)isoCode lastUpdate:(NSString *)lastUpdate lastUpdateDate:(NSString *)lastUpdateDate peopleFullyVaccinatedPerHundred:(int32_t)peopleFullyVaccinatedPerHundred peopleVaccinatedPerHundred:(int32_t)peopleVaccinatedPerHundred sourceName:(NSString *)sourceName sourceWebsite:(NSString *)sourceWebsite state:(NSString *)state totalVaccinations:(Vaccination_trackerTotalVaccinations *)totalVaccinations totalVaccinationsPerHundred:(int32_t)totalVaccinationsPerHundred vaccines:(NSArray<NSString *> *)vaccines __attribute__((swift_name("init(average14Days:average7Days:dailyVaccinations:isoCode:lastUpdate:lastUpdateDate:peopleFullyVaccinatedPerHundred:peopleVaccinatedPerHundred:sourceName:sourceWebsite:state:totalVaccinations:totalVaccinationsPerHundred:vaccines:)"))) __attribute__((objc_designated_initializer));
- (Vaccination_trackerAverage14days *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (Vaccination_trackerTotalVaccinations *)component12 __attribute__((swift_name("component12()")));
- (int32_t)component13 __attribute__((swift_name("component13()")));
- (NSArray<NSString *> *)component14 __attribute__((swift_name("component14()")));
- (Vaccination_trackerAverage7days *)component2 __attribute__((swift_name("component2()")));
- (Vaccination_trackerDailyVaccinations *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (Vaccination_trackerVaccinationDataResponseItem *)doCopyAverage14Days:(Vaccination_trackerAverage14days *)average14Days average7Days:(Vaccination_trackerAverage7days *)average7Days dailyVaccinations:(Vaccination_trackerDailyVaccinations *)dailyVaccinations isoCode:(NSString *)isoCode lastUpdate:(NSString *)lastUpdate lastUpdateDate:(NSString *)lastUpdateDate peopleFullyVaccinatedPerHundred:(int32_t)peopleFullyVaccinatedPerHundred peopleVaccinatedPerHundred:(int32_t)peopleVaccinatedPerHundred sourceName:(NSString *)sourceName sourceWebsite:(NSString *)sourceWebsite state:(NSString *)state totalVaccinations:(Vaccination_trackerTotalVaccinations *)totalVaccinations totalVaccinationsPerHundred:(int32_t)totalVaccinationsPerHundred vaccines:(NSArray<NSString *> *)vaccines __attribute__((swift_name("doCopy(average14Days:average7Days:dailyVaccinations:isoCode:lastUpdate:lastUpdateDate:peopleFullyVaccinatedPerHundred:peopleVaccinatedPerHundred:sourceName:sourceWebsite:state:totalVaccinations:totalVaccinationsPerHundred:vaccines:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Vaccination_trackerAverage14days *average14Days __attribute__((swift_name("average14Days")));
@property (readonly) Vaccination_trackerAverage7days *average7Days __attribute__((swift_name("average7Days")));
@property (readonly) Vaccination_trackerDailyVaccinations *dailyVaccinations __attribute__((swift_name("dailyVaccinations")));
@property (readonly) NSString *isoCode __attribute__((swift_name("isoCode")));
@property (readonly) NSString *lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) NSString *lastUpdateDate __attribute__((swift_name("lastUpdateDate")));
@property (readonly) int32_t peopleFullyVaccinatedPerHundred __attribute__((swift_name("peopleFullyVaccinatedPerHundred")));
@property (readonly) int32_t peopleVaccinatedPerHundred __attribute__((swift_name("peopleVaccinatedPerHundred")));
@property (readonly) NSString *sourceName __attribute__((swift_name("sourceName")));
@property (readonly) NSString *sourceWebsite __attribute__((swift_name("sourceWebsite")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) Vaccination_trackerTotalVaccinations *totalVaccinations __attribute__((swift_name("totalVaccinations")));
@property (readonly) int32_t totalVaccinationsPerHundred __attribute__((swift_name("totalVaccinationsPerHundred")));
@property (readonly) NSArray<NSString *> *vaccines __attribute__((swift_name("vaccines")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VaccinationDataResponseItem.Companion")))
@interface Vaccination_trackerVaccinationDataResponseItemCompanion : Vaccination_trackerBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Vaccination_trackerKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vaccinations")))
@interface Vaccination_trackerVaccinations : Vaccination_trackerBase
- (instancetype)initWithSingleDose:(int32_t)singleDose singleDosePercentage:(double)singleDosePercentage firstDose:(int32_t)firstDose firstDosePercentage:(double)firstDosePercentage secondDose:(int32_t)secondDose secondDosePercentage:(double)secondDosePercentage fullyVaccinated:(int32_t)fullyVaccinated fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage lastUpdate:(NSString *)lastUpdate total:(int32_t)total __attribute__((swift_name("init(singleDose:singleDosePercentage:firstDose:firstDosePercentage:secondDose:secondDosePercentage:fullyVaccinated:fullyVaccinatedPercentage:lastUpdate:total:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component10 __attribute__((swift_name("component10()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (double)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (Vaccination_trackerVaccinations *)doCopySingleDose:(int32_t)singleDose singleDosePercentage:(double)singleDosePercentage firstDose:(int32_t)firstDose firstDosePercentage:(double)firstDosePercentage secondDose:(int32_t)secondDose secondDosePercentage:(double)secondDosePercentage fullyVaccinated:(int32_t)fullyVaccinated fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage lastUpdate:(NSString *)lastUpdate total:(int32_t)total __attribute__((swift_name("doCopy(singleDose:singleDosePercentage:firstDose:firstDosePercentage:secondDose:secondDosePercentage:fullyVaccinated:fullyVaccinatedPercentage:lastUpdate:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t firstDose __attribute__((swift_name("firstDose")));
@property (readonly) double firstDosePercentage __attribute__((swift_name("firstDosePercentage")));
@property (readonly) int32_t fullyVaccinated __attribute__((swift_name("fullyVaccinated")));
@property (readonly) double fullyVaccinatedPercentage __attribute__((swift_name("fullyVaccinatedPercentage")));
@property (readonly) NSString *lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) int32_t secondDose __attribute__((swift_name("secondDose")));
@property (readonly) double secondDosePercentage __attribute__((swift_name("secondDosePercentage")));
@property (readonly) int32_t singleDose __attribute__((swift_name("singleDose")));
@property (readonly) double singleDosePercentage __attribute__((swift_name("singleDosePercentage")));
@property (readonly) int32_t total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vaccinations.Companion")))
@interface Vaccination_trackerVaccinationsCompanion : Vaccination_trackerBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Vaccination_trackerKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CovidVaccinationData")))
@interface Vaccination_trackerCovidVaccinationData : Vaccination_trackerBase
- (instancetype)initWithIsoCode:(NSString *)isoCode state:(NSString *)state singleDose:(int64_t)singleDose singleDosePercentage:(double)singleDosePercentage firstDose:(int64_t)firstDose firstDosePercentage:(double)firstDosePercentage secondDose:(int64_t)secondDose secondDosePercentage:(double)secondDosePercentage fullyVaccinated:(int64_t)fullyVaccinated fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage lastUpdate:(NSString *)lastUpdate total:(int64_t)total __attribute__((swift_name("init(isoCode:state:singleDose:singleDosePercentage:firstDose:firstDosePercentage:secondDose:secondDosePercentage:fullyVaccinated:fullyVaccinatedPercentage:lastUpdate:total:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (double)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (int64_t)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (int64_t)component7 __attribute__((swift_name("component7()")));
- (double)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (Vaccination_trackerCovidVaccinationData *)doCopyIsoCode:(NSString *)isoCode state:(NSString *)state singleDose:(int64_t)singleDose singleDosePercentage:(double)singleDosePercentage firstDose:(int64_t)firstDose firstDosePercentage:(double)firstDosePercentage secondDose:(int64_t)secondDose secondDosePercentage:(double)secondDosePercentage fullyVaccinated:(int64_t)fullyVaccinated fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage lastUpdate:(NSString *)lastUpdate total:(int64_t)total __attribute__((swift_name("doCopy(isoCode:state:singleDose:singleDosePercentage:firstDose:firstDosePercentage:secondDose:secondDosePercentage:fullyVaccinated:fullyVaccinatedPercentage:lastUpdate:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t firstDose __attribute__((swift_name("firstDose")));
@property (readonly) double firstDosePercentage __attribute__((swift_name("firstDosePercentage")));
@property (readonly) int64_t fullyVaccinated __attribute__((swift_name("fullyVaccinated")));
@property (readonly) double fullyVaccinatedPercentage __attribute__((swift_name("fullyVaccinatedPercentage")));
@property (readonly) NSString *isoCode __attribute__((swift_name("isoCode")));
@property (readonly) NSString *lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) int64_t secondDose __attribute__((swift_name("secondDose")));
@property (readonly) double secondDosePercentage __attribute__((swift_name("secondDosePercentage")));
@property (readonly) int64_t singleDose __attribute__((swift_name("singleDose")));
@property (readonly) double singleDosePercentage __attribute__((swift_name("singleDosePercentage")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) int64_t total __attribute__((swift_name("total")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol Vaccination_trackerRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<Vaccination_trackerRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<Vaccination_trackerRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("CovidVaccinationDatabase")))
@protocol Vaccination_trackerCovidVaccinationDatabase <Vaccination_trackerRuntimeTransacter>
@required
@property (readonly) id<Vaccination_trackerCovidVaccinationDatabaseQueries> covidVaccinationDatabaseQueries __attribute__((swift_name("covidVaccinationDatabaseQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CovidVaccinationDatabaseCompanion")))
@interface Vaccination_trackerCovidVaccinationDatabaseCompanion : Vaccination_trackerBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Vaccination_trackerCovidVaccinationDatabase>)invokeDriver:(id<Vaccination_trackerRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<Vaccination_trackerRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("CovidVaccinationDatabaseQueries")))
@protocol Vaccination_trackerCovidVaccinationDatabaseQueries <Vaccination_trackerRuntimeTransacter>
@required
- (void)clear __attribute__((swift_name("clear()")));
- (Vaccination_trackerRuntimeQuery<Vaccination_trackerCovidVaccinationData *> *)getVaccinationData __attribute__((swift_name("getVaccinationData()")));
- (Vaccination_trackerRuntimeQuery<id> *)getVaccinationDataMapper:(id (^)(NSString *, NSString *, Vaccination_trackerLong *, Vaccination_trackerDouble *, Vaccination_trackerLong *, Vaccination_trackerDouble *, Vaccination_trackerLong *, Vaccination_trackerDouble *, Vaccination_trackerLong *, Vaccination_trackerDouble *, NSString *, Vaccination_trackerLong *))mapper __attribute__((swift_name("getVaccinationData(mapper:)")));
- (void)insertVaccinationDataIsoCode:(NSString *)isoCode state:(NSString *)state singleDose:(int64_t)singleDose singleDosePercentage:(double)singleDosePercentage firstDose:(int64_t)firstDose firstDosePercentage:(double)firstDosePercentage secondDose:(int64_t)secondDose secondDosePercentage:(double)secondDosePercentage fullyVaccinated:(int64_t)fullyVaccinated fullyVaccinatedPercentage:(double)fullyVaccinatedPercentage lastUpdate:(NSString *)lastUpdate total:(int64_t)total __attribute__((swift_name("insertVaccinationData(isoCode:state:singleDose:singleDosePercentage:firstDose:firstDosePercentage:secondDose:secondDosePercentage:fullyVaccinated:fullyVaccinatedPercentage:lastUpdate:total:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface Vaccination_trackerDatabaseDriverFactory : Vaccination_trackerBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<Vaccination_trackerRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface Vaccination_trackerKotlinThrowable : Vaccination_trackerBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Vaccination_trackerKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Vaccination_trackerKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (Vaccination_trackerKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Vaccination_trackerKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface Vaccination_trackerKotlinException : Vaccination_trackerKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Vaccination_trackerKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Vaccination_trackerKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface Vaccination_trackerKotlinRuntimeException : Vaccination_trackerKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Vaccination_trackerKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Vaccination_trackerKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface Vaccination_trackerKotlinIllegalStateException : Vaccination_trackerKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Vaccination_trackerKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Vaccination_trackerKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface Vaccination_trackerKotlinCancellationException : Vaccination_trackerKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Vaccination_trackerKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Vaccination_trackerKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol Vaccination_trackerKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<Vaccination_trackerKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol Vaccination_trackerKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<Vaccination_trackerKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol Vaccination_trackerKotlinx_serialization_coreKSerializer <Vaccination_trackerKotlinx_serialization_coreSerializationStrategy, Vaccination_trackerKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol Vaccination_trackerRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol Vaccination_trackerRuntimeTransactionWithoutReturn <Vaccination_trackerRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<Vaccination_trackerRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol Vaccination_trackerRuntimeTransactionWithReturn <Vaccination_trackerRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<Vaccination_trackerRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol Vaccination_trackerRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol Vaccination_trackerRuntimeSqlDriver <Vaccination_trackerRuntimeCloseable>
@required
- (Vaccination_trackerRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(Vaccination_trackerInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<Vaccination_trackerRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<Vaccination_trackerRuntimeSqlCursor>)executeQueryIdentifier:(Vaccination_trackerInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<Vaccination_trackerRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (Vaccination_trackerRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol Vaccination_trackerRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<Vaccination_trackerRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<Vaccination_trackerRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface Vaccination_trackerRuntimeQuery<__covariant RowType> : Vaccination_trackerBase
- (instancetype)initWithQueries:(NSMutableArray<Vaccination_trackerRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<Vaccination_trackerRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<Vaccination_trackerRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<Vaccination_trackerRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<Vaccination_trackerRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<Vaccination_trackerRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Vaccination_trackerKotlinArray<T> : Vaccination_trackerBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Vaccination_trackerInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Vaccination_trackerKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol Vaccination_trackerKotlinx_serialization_coreEncoder
@required
- (id<Vaccination_trackerKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<Vaccination_trackerKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<Vaccination_trackerKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<Vaccination_trackerKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<Vaccination_trackerKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) Vaccination_trackerKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol Vaccination_trackerKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<Vaccination_trackerKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<Vaccination_trackerKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) Vaccination_trackerKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol Vaccination_trackerKotlinx_serialization_coreDecoder
@required
- (id<Vaccination_trackerKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<Vaccination_trackerKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (Vaccination_trackerKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<Vaccination_trackerKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<Vaccination_trackerKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) Vaccination_trackerKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface Vaccination_trackerRuntimeTransacterTransaction : Vaccination_trackerBase <Vaccination_trackerRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) Vaccination_trackerRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol Vaccination_trackerRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(Vaccination_trackerKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(Vaccination_trackerDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(Vaccination_trackerLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol Vaccination_trackerRuntimeSqlCursor <Vaccination_trackerRuntimeCloseable>
@required
- (Vaccination_trackerKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (Vaccination_trackerDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (Vaccination_trackerLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol Vaccination_trackerRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol Vaccination_trackerKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol Vaccination_trackerKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<Vaccination_trackerKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Vaccination_trackerKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<Vaccination_trackerKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) Vaccination_trackerKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface Vaccination_trackerKotlinx_serialization_coreSerializersModule : Vaccination_trackerBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<Vaccination_trackerKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<Vaccination_trackerKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<Vaccination_trackerKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<Vaccination_trackerKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<Vaccination_trackerKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Vaccination_trackerKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<Vaccination_trackerKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<Vaccination_trackerKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol Vaccination_trackerKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface Vaccination_trackerKotlinx_serialization_coreSerialKind : Vaccination_trackerBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol Vaccination_trackerKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<Vaccination_trackerKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Vaccination_trackerKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<Vaccination_trackerKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<Vaccination_trackerKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) Vaccination_trackerKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Vaccination_trackerKotlinNothing : Vaccination_trackerBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface Vaccination_trackerKotlinByteArray : Vaccination_trackerBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(Vaccination_trackerByte *(^)(Vaccination_trackerInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (Vaccination_trackerKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol Vaccination_trackerKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<Vaccination_trackerKotlinKClass>)kClass provider:(id<Vaccination_trackerKotlinx_serialization_coreKSerializer> (^)(NSArray<id<Vaccination_trackerKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<Vaccination_trackerKotlinKClass>)kClass serializer:(id<Vaccination_trackerKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<Vaccination_trackerKotlinKClass>)baseClass actualClass:(id<Vaccination_trackerKotlinKClass>)actualClass actualSerializer:(id<Vaccination_trackerKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<Vaccination_trackerKotlinKClass>)baseClass defaultSerializerProvider:(id<Vaccination_trackerKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Vaccination_trackerKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Vaccination_trackerKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol Vaccination_trackerKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol Vaccination_trackerKotlinKClass <Vaccination_trackerKotlinKDeclarationContainer, Vaccination_trackerKotlinKAnnotatedElement, Vaccination_trackerKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface Vaccination_trackerKotlinByteIterator : Vaccination_trackerBase <Vaccination_trackerKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Vaccination_trackerByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
