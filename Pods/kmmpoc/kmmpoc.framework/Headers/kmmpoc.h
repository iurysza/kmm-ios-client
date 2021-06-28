#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KmmpocDatabaseDriverFactory, KmmpocHitStore, KmmpocHit, KmmpocArticlesResponse, KmmpocAuthor, KmmpocStoryText, KmmpocTitle, KmmpocUrl, KmmpocHighlightResult, KmmpocLinks, KmmpocRocket, KmmpocRocketLaunch, KmmpocSelectAllLaunchesInfo, KmmpocRuntimeQuery<__covariant RowType>, KmmpocRocket_, KmmpocLaunch, KmmpocKotlinThrowable, KmmpocKotlinArray<T>, KmmpocKotlinException, KmmpocKotlinRuntimeException, KmmpocKotlinIllegalStateException, KmmpocRuntimeTransacterTransaction, KmmpocKotlinx_serialization_coreSerializersModule, KmmpocKotlinx_serialization_coreSerialKind, KmmpocKotlinNothing, KmmpocKotlinx_serialization_coreUpdateMode, KmmpocKotlinByteArray, KmmpocKotlinEnum<E>, KmmpocKotlinByteIterator;

@protocol KmmpocKotlinx_serialization_coreKSerializer, KmmpocRuntimeTransactionWithoutReturn, KmmpocRuntimeTransactionWithReturn, KmmpocRuntimeTransacter, KmmpocRuntimeSqlDriver, KmmpocAppDatabaseQueries, KmmpocHackernewsDatabaseQueries, KmmpocHackernewsDatabase, KmmpocRuntimeSqlDriverSchema, KmmpocKotlinx_serialization_coreEncoder, KmmpocKotlinx_serialization_coreSerialDescriptor, KmmpocKotlinx_serialization_coreSerializationStrategy, KmmpocKotlinx_serialization_coreDecoder, KmmpocKotlinx_serialization_coreDeserializationStrategy, KmmpocRuntimeSqlCursor, KmmpocRuntimeQueryListener, KmmpocRuntimeTransactionCallbacks, KmmpocRuntimeSqlPreparedStatement, KmmpocRuntimeCloseable, KmmpocKotlinIterator, KmmpocKotlinx_serialization_coreCompositeEncoder, KmmpocKotlinAnnotation, KmmpocKotlinx_serialization_coreCompositeDecoder, KmmpocKotlinx_serialization_coreSerializersModuleCollector, KmmpocKotlinKClass, KmmpocKotlinComparable, KmmpocKotlinKDeclarationContainer, KmmpocKotlinKAnnotatedElement, KmmpocKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface KmmpocBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KmmpocBase (KmmpocBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KmmpocMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KmmpocMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKmmpocKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KmmpocNumber : NSNumber
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
@interface KmmpocByte : KmmpocNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KmmpocUByte : KmmpocNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KmmpocShort : KmmpocNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KmmpocUShort : KmmpocNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KmmpocInt : KmmpocNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KmmpocUInt : KmmpocNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KmmpocLong : KmmpocNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KmmpocULong : KmmpocNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KmmpocFloat : KmmpocNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KmmpocDouble : KmmpocNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KmmpocBoolean : KmmpocNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HackerNewsSDK")))
@interface KmmpocHackerNewsSDK : KmmpocBase
- (instancetype)initWithDatabaseDriverFactory:(KmmpocDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("init(databaseDriverFactory:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getArticlesForceReload:(BOOL)forceReload completionHandler:(void (^)(NSArray<KmmpocHitStore *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getArticles(forceReload:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArticlesResponse")))
@interface KmmpocArticlesResponse : KmmpocBase
- (instancetype)initWithExhaustiveNbHits:(BOOL)exhaustiveNbHits hits:(NSArray<KmmpocHit *> *)hits hitsPerPage:(int32_t)hitsPerPage nbHits:(int32_t)nbHits nbPages:(int32_t)nbPages page:(int32_t)page params:(NSString *)params processingTimeMS:(int32_t)processingTimeMS query:(NSString *)query __attribute__((swift_name("init(exhaustiveNbHits:hits:hitsPerPage:nbHits:nbPages:page:params:processingTimeMS:query:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSArray<KmmpocHit *> *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (KmmpocArticlesResponse *)doCopyExhaustiveNbHits:(BOOL)exhaustiveNbHits hits:(NSArray<KmmpocHit *> *)hits hitsPerPage:(int32_t)hitsPerPage nbHits:(int32_t)nbHits nbPages:(int32_t)nbPages page:(int32_t)page params:(NSString *)params processingTimeMS:(int32_t)processingTimeMS query:(NSString *)query __attribute__((swift_name("doCopy(exhaustiveNbHits:hits:hitsPerPage:nbHits:nbPages:page:params:processingTimeMS:query:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL exhaustiveNbHits __attribute__((swift_name("exhaustiveNbHits")));
@property (readonly) NSArray<KmmpocHit *> *hits __attribute__((swift_name("hits")));
@property (readonly) int32_t hitsPerPage __attribute__((swift_name("hitsPerPage")));
@property (readonly) int32_t nbHits __attribute__((swift_name("nbHits")));
@property (readonly) int32_t nbPages __attribute__((swift_name("nbPages")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) NSString *params __attribute__((swift_name("params")));
@property (readonly) int32_t processingTimeMS __attribute__((swift_name("processingTimeMS")));
@property (readonly) NSString *query __attribute__((swift_name("query")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArticlesResponse.Companion")))
@interface KmmpocArticlesResponseCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Author")))
@interface KmmpocAuthor : KmmpocBase
- (instancetype)initWithMatchLevel:(NSString *)matchLevel matchedWords:(NSArray<NSString *> *)matchedWords value:(NSString *)value __attribute__((swift_name("init(matchLevel:matchedWords:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (KmmpocAuthor *)doCopyMatchLevel:(NSString *)matchLevel matchedWords:(NSArray<NSString *> *)matchedWords value:(NSString *)value __attribute__((swift_name("doCopy(matchLevel:matchedWords:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *matchLevel __attribute__((swift_name("matchLevel")));
@property (readonly) NSArray<NSString *> *matchedWords __attribute__((swift_name("matchedWords")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Author.Companion")))
@interface KmmpocAuthorCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HighlightResult")))
@interface KmmpocHighlightResult : KmmpocBase
- (instancetype)initWithAuthor:(KmmpocAuthor * _Nullable)author story_text:(KmmpocStoryText * _Nullable)story_text title:(KmmpocTitle * _Nullable)title url:(KmmpocUrl * _Nullable)url __attribute__((swift_name("init(author:story_text:title:url:)"))) __attribute__((objc_designated_initializer));
- (KmmpocAuthor * _Nullable)component1 __attribute__((swift_name("component1()")));
- (KmmpocStoryText * _Nullable)component2 __attribute__((swift_name("component2()")));
- (KmmpocTitle * _Nullable)component3 __attribute__((swift_name("component3()")));
- (KmmpocUrl * _Nullable)component4 __attribute__((swift_name("component4()")));
- (KmmpocHighlightResult *)doCopyAuthor:(KmmpocAuthor * _Nullable)author story_text:(KmmpocStoryText * _Nullable)story_text title:(KmmpocTitle * _Nullable)title url:(KmmpocUrl * _Nullable)url __attribute__((swift_name("doCopy(author:story_text:title:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmmpocAuthor * _Nullable author __attribute__((swift_name("author")));
@property (readonly) KmmpocStoryText * _Nullable story_text __attribute__((swift_name("story_text")));
@property (readonly) KmmpocTitle * _Nullable title __attribute__((swift_name("title")));
@property (readonly) KmmpocUrl * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HighlightResult.Companion")))
@interface KmmpocHighlightResultCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Hit")))
@interface KmmpocHit : KmmpocBase
- (instancetype)initWithHighlightResult:(KmmpocHighlightResult * _Nullable)highlightResult tags:(NSArray<NSString *> *)tags author:(NSString *)author commentText:(NSString * _Nullable)commentText createdAt:(NSString *)createdAt createdAtI:(int32_t)createdAtI numComments:(KmmpocInt * _Nullable)numComments objectID:(NSString * _Nullable)objectID parentId:(NSString * _Nullable)parentId points:(KmmpocInt * _Nullable)points relevancyScore:(KmmpocInt * _Nullable)relevancyScore storyId:(NSString * _Nullable)storyId storyText:(NSString * _Nullable)storyText storyTitle:(NSString * _Nullable)storyTitle storyUrl:(NSString * _Nullable)storyUrl title:(NSString * _Nullable)title url:(NSString * _Nullable)url __attribute__((swift_name("init(highlightResult:tags:author:commentText:createdAt:createdAtI:numComments:objectID:parentId:points:relevancyScore:storyId:storyText:storyTitle:storyUrl:title:url:)"))) __attribute__((objc_designated_initializer));
- (KmmpocHighlightResult * _Nullable)component1 __attribute__((swift_name("component1()")));
- (KmmpocInt * _Nullable)component10 __attribute__((swift_name("component10()")));
- (KmmpocInt * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (KmmpocInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (KmmpocHit *)doCopyHighlightResult:(KmmpocHighlightResult * _Nullable)highlightResult tags:(NSArray<NSString *> *)tags author:(NSString *)author commentText:(NSString * _Nullable)commentText createdAt:(NSString *)createdAt createdAtI:(int32_t)createdAtI numComments:(KmmpocInt * _Nullable)numComments objectID:(NSString * _Nullable)objectID parentId:(NSString * _Nullable)parentId points:(KmmpocInt * _Nullable)points relevancyScore:(KmmpocInt * _Nullable)relevancyScore storyId:(NSString * _Nullable)storyId storyText:(NSString * _Nullable)storyText storyTitle:(NSString * _Nullable)storyTitle storyUrl:(NSString * _Nullable)storyUrl title:(NSString * _Nullable)title url:(NSString * _Nullable)url __attribute__((swift_name("doCopy(highlightResult:tags:author:commentText:createdAt:createdAtI:numComments:objectID:parentId:points:relevancyScore:storyId:storyText:storyTitle:storyUrl:title:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *author __attribute__((swift_name("author")));
@property (readonly) NSString * _Nullable commentText __attribute__((swift_name("commentText")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) int32_t createdAtI __attribute__((swift_name("createdAtI")));
@property (readonly) KmmpocHighlightResult * _Nullable highlightResult __attribute__((swift_name("highlightResult")));
@property (readonly) KmmpocInt * _Nullable numComments __attribute__((swift_name("numComments")));
@property (readonly) NSString * _Nullable objectID __attribute__((swift_name("objectID")));
@property (readonly) NSString * _Nullable parentId __attribute__((swift_name("parentId")));
@property (readonly) KmmpocInt * _Nullable points __attribute__((swift_name("points")));
@property (readonly) KmmpocInt * _Nullable relevancyScore __attribute__((swift_name("relevancyScore")));
@property (readonly) NSString * _Nullable storyId __attribute__((swift_name("storyId")));
@property (readonly) NSString * _Nullable storyText __attribute__((swift_name("storyText")));
@property (readonly) NSString * _Nullable storyTitle __attribute__((swift_name("storyTitle")));
@property (readonly) NSString * _Nullable storyUrl __attribute__((swift_name("storyUrl")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Hit.Companion")))
@interface KmmpocHitCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Links")))
@interface KmmpocLinks : KmmpocBase
- (instancetype)initWithMissionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl __attribute__((swift_name("init(missionPatchUrl:articleUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (KmmpocLinks *)doCopyMissionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl __attribute__((swift_name("doCopy(missionPatchUrl:articleUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable articleUrl __attribute__((swift_name("articleUrl")));
@property (readonly) NSString * _Nullable missionPatchUrl __attribute__((swift_name("missionPatchUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Links.Companion")))
@interface KmmpocLinksCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rocket")))
@interface KmmpocRocket : KmmpocBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name type:(NSString *)type __attribute__((swift_name("init(id:name:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (KmmpocRocket *)doCopyId:(NSString *)id name:(NSString *)name type:(NSString *)type __attribute__((swift_name("doCopy(id:name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rocket.Companion")))
@interface KmmpocRocketCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketLaunch")))
@interface KmmpocRocketLaunch : KmmpocBase
- (instancetype)initWithFlightNumber:(int32_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear launchDateUTC:(NSString *)launchDateUTC rocket:(KmmpocRocket *)rocket details:(NSString * _Nullable)details launchSuccess:(KmmpocBoolean * _Nullable)launchSuccess links:(KmmpocLinks *)links __attribute__((swift_name("init(flightNumber:missionName:launchYear:launchDateUTC:rocket:details:launchSuccess:links:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (KmmpocRocket *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (KmmpocBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (KmmpocLinks *)component8 __attribute__((swift_name("component8()")));
- (KmmpocRocketLaunch *)doCopyFlightNumber:(int32_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear launchDateUTC:(NSString *)launchDateUTC rocket:(KmmpocRocket *)rocket details:(NSString * _Nullable)details launchSuccess:(KmmpocBoolean * _Nullable)launchSuccess links:(KmmpocLinks *)links __attribute__((swift_name("doCopy(flightNumber:missionName:launchYear:launchDateUTC:rocket:details:launchSuccess:links:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable details __attribute__((swift_name("details")));
@property (readonly) int32_t flightNumber __attribute__((swift_name("flightNumber")));
@property (readonly) NSString *launchDateUTC __attribute__((swift_name("launchDateUTC")));
@property (readonly) KmmpocBoolean * _Nullable launchSuccess __attribute__((swift_name("launchSuccess")));
@property (readonly) int32_t launchYear __attribute__((swift_name("launchYear")));
@property (readonly) KmmpocLinks *links __attribute__((swift_name("links")));
@property (readonly) NSString *missionName __attribute__((swift_name("missionName")));
@property (readonly) KmmpocRocket *rocket __attribute__((swift_name("rocket")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RocketLaunch.Companion")))
@interface KmmpocRocketLaunchCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoryText")))
@interface KmmpocStoryText : KmmpocBase
- (instancetype)initWithMatchLevel:(NSString *)matchLevel matchedWords:(NSArray<NSString *> *)matchedWords value:(NSString *)value __attribute__((swift_name("init(matchLevel:matchedWords:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (KmmpocStoryText *)doCopyMatchLevel:(NSString *)matchLevel matchedWords:(NSArray<NSString *> *)matchedWords value:(NSString *)value __attribute__((swift_name("doCopy(matchLevel:matchedWords:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *matchLevel __attribute__((swift_name("matchLevel")));
@property (readonly) NSArray<NSString *> *matchedWords __attribute__((swift_name("matchedWords")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoryText.Companion")))
@interface KmmpocStoryTextCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Title")))
@interface KmmpocTitle : KmmpocBase
- (instancetype)initWithMatchLevel:(NSString *)matchLevel matchedWords:(NSArray<NSString *> *)matchedWords value:(NSString *)value __attribute__((swift_name("init(matchLevel:matchedWords:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (KmmpocTitle *)doCopyMatchLevel:(NSString *)matchLevel matchedWords:(NSArray<NSString *> *)matchedWords value:(NSString *)value __attribute__((swift_name("doCopy(matchLevel:matchedWords:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *matchLevel __attribute__((swift_name("matchLevel")));
@property (readonly) NSArray<NSString *> *matchedWords __attribute__((swift_name("matchedWords")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Title.Companion")))
@interface KmmpocTitleCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Url")))
@interface KmmpocUrl : KmmpocBase
- (instancetype)initWithMatchLevel:(NSString *)matchLevel matchedWords:(NSArray<NSString *> *)matchedWords value:(NSString *)value __attribute__((swift_name("init(matchLevel:matchedWords:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (KmmpocUrl *)doCopyMatchLevel:(NSString *)matchLevel matchedWords:(NSArray<NSString *> *)matchedWords value:(NSString *)value __attribute__((swift_name("doCopy(matchLevel:matchedWords:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *matchLevel __attribute__((swift_name("matchLevel")));
@property (readonly) NSArray<NSString *> *matchedWords __attribute__((swift_name("matchedWords")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Url.Companion")))
@interface KmmpocUrlCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HackernewsApi")))
@interface KmmpocHackernewsApi : KmmpocBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllHitsWithCompletionHandler:(void (^)(NSArray<KmmpocHit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllHits(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HackernewsApi.Companion")))
@interface KmmpocHackernewsApiCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol KmmpocRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<KmmpocRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<KmmpocRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("AppDatabaseQueries")))
@protocol KmmpocAppDatabaseQueries <KmmpocRuntimeTransacter>
@required
- (void)insertLaunchFlightNumber:(int64_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear rocketId:(NSString *)rocketId details:(NSString * _Nullable)details launchSuccess:(KmmpocBoolean * _Nullable)launchSuccess launchDateUTC:(NSString *)launchDateUTC missionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl __attribute__((swift_name("insertLaunch(flightNumber:missionName:launchYear:rocketId:details:launchSuccess:launchDateUTC:missionPatchUrl:articleUrl:)")));
- (void)insertRocketId:(NSString *)id name:(NSString *)name type:(NSString *)type __attribute__((swift_name("insertRocket(id:name:type:)")));
- (void)removeAllLaunches __attribute__((swift_name("removeAllLaunches()")));
- (void)removeAllRockets __attribute__((swift_name("removeAllRockets()")));
- (KmmpocRuntimeQuery<KmmpocSelectAllLaunchesInfo *> *)selectAllLaunchesInfo __attribute__((swift_name("selectAllLaunchesInfo()")));
- (KmmpocRuntimeQuery<id> *)selectAllLaunchesInfoMapper:(id (^)(KmmpocLong *, NSString *, KmmpocInt *, NSString *, NSString * _Nullable, KmmpocBoolean * _Nullable, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllLaunchesInfo(mapper:)")));
- (KmmpocRuntimeQuery<KmmpocRocket_ *> *)selectRocketByIdId:(NSString *)id __attribute__((swift_name("selectRocketById(id:)")));
- (KmmpocRuntimeQuery<id> *)selectRocketByIdId:(NSString *)id mapper:(id (^)(NSString *, NSString *, NSString *))mapper __attribute__((swift_name("selectRocketById(id:mapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface KmmpocDatabaseDriverFactory : KmmpocBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<KmmpocRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end;

__attribute__((swift_name("HackernewsDatabase")))
@protocol KmmpocHackernewsDatabase <KmmpocRuntimeTransacter>
@required
@property (readonly) id<KmmpocAppDatabaseQueries> appDatabaseQueries __attribute__((swift_name("appDatabaseQueries")));
@property (readonly) id<KmmpocHackernewsDatabaseQueries> hackernewsDatabaseQueries __attribute__((swift_name("hackernewsDatabaseQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HackernewsDatabaseCompanion")))
@interface KmmpocHackernewsDatabaseCompanion : KmmpocBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<KmmpocHackernewsDatabase>)invokeDriver:(id<KmmpocRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<KmmpocRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("HackernewsDatabaseQueries")))
@protocol KmmpocHackernewsDatabaseQueries <KmmpocRuntimeTransacter>
@required
- (void)insertHitUrl:(NSString *)url title:(NSString *)title storyId:(NSString *)storyId storyText:(NSString *)storyText storyTitle:(NSString *)storyTitle storyUrl:(NSString *)storyUrl relevancyScore:(int64_t)relevancyScore __attribute__((swift_name("insertHit(url:title:storyId:storyText:storyTitle:storyUrl:relevancyScore:)")));
- (void)removeAllHits __attribute__((swift_name("removeAllHits()")));
- (KmmpocRuntimeQuery<KmmpocHitStore *> *)selectAllHits __attribute__((swift_name("selectAllHits()")));
- (KmmpocRuntimeQuery<id> *)selectAllHitsMapper:(id (^)(NSString *, NSString *, NSString *, NSString *, NSString *, KmmpocLong *, NSString *))mapper __attribute__((swift_name("selectAllHits(mapper:)")));
- (KmmpocRuntimeQuery<KmmpocHitStore *> *)selectHitByIdStoryId:(NSString *)storyId __attribute__((swift_name("selectHitById(storyId:)")));
- (KmmpocRuntimeQuery<id> *)selectHitByIdStoryId:(NSString *)storyId mapper:(id (^)(NSString *, NSString *, NSString *, NSString *, NSString *, KmmpocLong *, NSString *))mapper __attribute__((swift_name("selectHitById(storyId:mapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HitStore")))
@interface KmmpocHitStore : KmmpocBase
- (instancetype)initWithUrl:(NSString *)url title:(NSString *)title storyUrl:(NSString *)storyUrl storyTitle:(NSString *)storyTitle storyId:(NSString *)storyId relevancyScore:(int64_t)relevancyScore storyText:(NSString *)storyText __attribute__((swift_name("init(url:title:storyUrl:storyTitle:storyId:relevancyScore:storyText:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (KmmpocHitStore *)doCopyUrl:(NSString *)url title:(NSString *)title storyUrl:(NSString *)storyUrl storyTitle:(NSString *)storyTitle storyId:(NSString *)storyId relevancyScore:(int64_t)relevancyScore storyText:(NSString *)storyText __attribute__((swift_name("doCopy(url:title:storyUrl:storyTitle:storyId:relevancyScore:storyText:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t relevancyScore __attribute__((swift_name("relevancyScore")));
@property (readonly) NSString *storyId __attribute__((swift_name("storyId")));
@property (readonly) NSString *storyText __attribute__((swift_name("storyText")));
@property (readonly) NSString *storyTitle __attribute__((swift_name("storyTitle")));
@property (readonly) NSString *storyUrl __attribute__((swift_name("storyUrl")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Launch")))
@interface KmmpocLaunch : KmmpocBase
- (instancetype)initWithFlightNumber:(int64_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear rocketId:(NSString *)rocketId details:(NSString * _Nullable)details launchSuccess:(KmmpocBoolean * _Nullable)launchSuccess launchDateUTC:(NSString *)launchDateUTC missionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl __attribute__((swift_name("init(flightNumber:missionName:launchYear:rocketId:details:launchSuccess:launchDateUTC:missionPatchUrl:articleUrl:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (KmmpocBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (KmmpocLaunch *)doCopyFlightNumber:(int64_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear rocketId:(NSString *)rocketId details:(NSString * _Nullable)details launchSuccess:(KmmpocBoolean * _Nullable)launchSuccess launchDateUTC:(NSString *)launchDateUTC missionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl __attribute__((swift_name("doCopy(flightNumber:missionName:launchYear:rocketId:details:launchSuccess:launchDateUTC:missionPatchUrl:articleUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable articleUrl __attribute__((swift_name("articleUrl")));
@property (readonly) NSString * _Nullable details __attribute__((swift_name("details")));
@property (readonly) int64_t flightNumber __attribute__((swift_name("flightNumber")));
@property (readonly) NSString *launchDateUTC __attribute__((swift_name("launchDateUTC")));
@property (readonly) KmmpocBoolean * _Nullable launchSuccess __attribute__((swift_name("launchSuccess")));
@property (readonly) int32_t launchYear __attribute__((swift_name("launchYear")));
@property (readonly) NSString *missionName __attribute__((swift_name("missionName")));
@property (readonly) NSString * _Nullable missionPatchUrl __attribute__((swift_name("missionPatchUrl")));
@property (readonly) NSString *rocketId __attribute__((swift_name("rocketId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rocket_")))
@interface KmmpocRocket_ : KmmpocBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name type:(NSString *)type __attribute__((swift_name("init(id:name:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (KmmpocRocket_ *)doCopyId:(NSString *)id name:(NSString *)name type:(NSString *)type __attribute__((swift_name("doCopy(id:name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllLaunchesInfo")))
@interface KmmpocSelectAllLaunchesInfo : KmmpocBase
- (instancetype)initWithFlightNumber:(int64_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear rocketId:(NSString *)rocketId details:(NSString * _Nullable)details launchSuccess:(KmmpocBoolean * _Nullable)launchSuccess launchDateUTC:(NSString *)launchDateUTC missionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl id:(NSString * _Nullable)id name:(NSString * _Nullable)name type:(NSString * _Nullable)type __attribute__((swift_name("init(flightNumber:missionName:launchYear:rocketId:details:launchSuccess:launchDateUTC:missionPatchUrl:articleUrl:id:name:type:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (KmmpocBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (KmmpocSelectAllLaunchesInfo *)doCopyFlightNumber:(int64_t)flightNumber missionName:(NSString *)missionName launchYear:(int32_t)launchYear rocketId:(NSString *)rocketId details:(NSString * _Nullable)details launchSuccess:(KmmpocBoolean * _Nullable)launchSuccess launchDateUTC:(NSString *)launchDateUTC missionPatchUrl:(NSString * _Nullable)missionPatchUrl articleUrl:(NSString * _Nullable)articleUrl id:(NSString * _Nullable)id name:(NSString * _Nullable)name type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(flightNumber:missionName:launchYear:rocketId:details:launchSuccess:launchDateUTC:missionPatchUrl:articleUrl:id:name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable articleUrl __attribute__((swift_name("articleUrl")));
@property (readonly) NSString * _Nullable details __attribute__((swift_name("details")));
@property (readonly) int64_t flightNumber __attribute__((swift_name("flightNumber")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *launchDateUTC __attribute__((swift_name("launchDateUTC")));
@property (readonly) KmmpocBoolean * _Nullable launchSuccess __attribute__((swift_name("launchSuccess")));
@property (readonly) int32_t launchYear __attribute__((swift_name("launchYear")));
@property (readonly) NSString *missionName __attribute__((swift_name("missionName")));
@property (readonly) NSString * _Nullable missionPatchUrl __attribute__((swift_name("missionPatchUrl")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString *rocketId __attribute__((swift_name("rocketId")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface KmmpocKotlinThrowable : KmmpocBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KmmpocKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmmpocKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface KmmpocKotlinException : KmmpocKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KmmpocKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KmmpocKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KmmpocKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KmmpocKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KmmpocKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<KmmpocKotlinx_serialization_coreDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)"))) __attribute__((unavailable("Patch function is deprecated for removal since this functionality is no longer supported by serializer.Some formats may provide implementation-specific patching in their Decoders.")));
@property (readonly) id<KmmpocKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KmmpocKotlinx_serialization_coreKSerializer <KmmpocKotlinx_serialization_coreSerializationStrategy, KmmpocKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface KmmpocKotlinRuntimeException : KmmpocKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KmmpocKotlinIllegalStateException : KmmpocKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface KmmpocKotlinCancellationException : KmmpocKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmpocKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface KmmpocRuntimeQuery<__covariant RowType> : KmmpocBase
- (instancetype)initWithQueries:(NSMutableArray<KmmpocRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<KmmpocRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<KmmpocRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<KmmpocRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<KmmpocRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<KmmpocRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol KmmpocRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol KmmpocRuntimeTransactionWithoutReturn <KmmpocRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<KmmpocRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol KmmpocRuntimeTransactionWithReturn <KmmpocRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<KmmpocRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol KmmpocRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol KmmpocRuntimeSqlDriver <KmmpocRuntimeCloseable>
@required
- (KmmpocRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(KmmpocInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<KmmpocRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<KmmpocRuntimeSqlCursor>)executeQueryIdentifier:(KmmpocInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<KmmpocRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (KmmpocRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol KmmpocRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<KmmpocRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<KmmpocRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KmmpocKotlinArray<T> : KmmpocBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KmmpocInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KmmpocKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KmmpocKotlinx_serialization_coreEncoder
@required
- (id<KmmpocKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KmmpocKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(KmmpocKotlinArray<id<KmmpocKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginCollection method with two arguments.")));
- (id<KmmpocKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<KmmpocKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor typeSerializers:(KmmpocKotlinArray<id<KmmpocKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<KmmpocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KmmpocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KmmpocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KmmpocKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KmmpocKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KmmpocKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KmmpocKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KmmpocKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KmmpocKotlinx_serialization_coreDecoder
@required
- (id<KmmpocKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<KmmpocKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor typeParams:(KmmpocKotlinArray<id<KmmpocKotlinx_serialization_coreKSerializer>> *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (KmmpocKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
- (id _Nullable)updateSerializableValueDeserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
@property (readonly) KmmpocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) KmmpocKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol KmmpocRuntimeSqlCursor <KmmpocRuntimeCloseable>
@required
- (KmmpocKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (KmmpocDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (KmmpocLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol KmmpocRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface KmmpocRuntimeTransacterTransaction : KmmpocBase <KmmpocRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) KmmpocRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol KmmpocRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index value:(KmmpocKotlinByteArray * _Nullable)value __attribute__((swift_name("bindBytes(index:value:)")));
- (void)bindDoubleIndex:(int32_t)index value:(KmmpocDouble * _Nullable)value __attribute__((swift_name("bindDouble(index:value:)")));
- (void)bindLongIndex:(int32_t)index value:(KmmpocLong * _Nullable)value __attribute__((swift_name("bindLong(index:value:)")));
- (void)bindStringIndex:(int32_t)index value:(NSString * _Nullable)value __attribute__((swift_name("bindString(index:value:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KmmpocKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KmmpocKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmmpocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmmpocKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KmmpocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KmmpocKotlinx_serialization_coreSerializersModule : KmmpocBase
- (void)dumpToCollector:(id<KmmpocKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<KmmpocKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<KmmpocKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<KmmpocKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmmpocKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<KmmpocKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmmpocKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol KmmpocKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KmmpocKotlinx_serialization_coreSerialKind : KmmpocBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KmmpocKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
- (id _Nullable)updateSerializableElementDescriptor:(id<KmmpocKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
@property (readonly) KmmpocKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) KmmpocKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KmmpocKotlinNothing : KmmpocBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KmmpocKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KmmpocKotlinEnum<E> : KmmpocBase <KmmpocKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreUpdateMode")))
@interface KmmpocKotlinx_serialization_coreUpdateMode : KmmpocKotlinEnum<KmmpocKotlinx_serialization_coreUpdateMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmpocKotlinx_serialization_coreUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) KmmpocKotlinx_serialization_coreUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) KmmpocKotlinx_serialization_coreUpdateMode *update __attribute__((swift_name("update")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KmmpocKotlinByteArray : KmmpocBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KmmpocByte *(^)(KmmpocInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmmpocKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KmmpocKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KmmpocKotlinKClass>)kClass serializer:(id<KmmpocKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KmmpocKotlinKClass>)baseClass actualClass:(id<KmmpocKotlinKClass>)actualClass actualSerializer:(id<KmmpocKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KmmpocKotlinKClass>)baseClass defaultSerializerProvider:(id<KmmpocKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KmmpocKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KmmpocKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol KmmpocKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol KmmpocKotlinKClass <KmmpocKotlinKDeclarationContainer, KmmpocKotlinKAnnotatedElement, KmmpocKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface KmmpocKotlinByteIterator : KmmpocBase <KmmpocKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmmpocByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
