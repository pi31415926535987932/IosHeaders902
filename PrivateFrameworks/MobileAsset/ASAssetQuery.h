/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPredicate, NSArray, NSString;

@interface ASAssetQuery : NSObject {

	char _queriesLocalAssetInformationOnly;
	NSPredicate* _predicate;
	NSArray* _results;
	NSString* _assetType;
	double _networkTimeout;

}

@property (nonatomic,retain) NSPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) char queriesLocalAssetInformationOnly;              //@synthesize queriesLocalAssetInformationOnly=_queriesLocalAssetInformationOnly - In the implementation block
@property (nonatomic,retain) NSArray * results;                                  //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) double networkTimeout;                              //@synthesize networkTimeout=_networkTimeout - In the implementation block
@property (nonatomic,copy) NSString * assetType;                                 //@synthesize assetType=_assetType - In the implementation block
+(id)queryPredicateForProperties:(id)arg1 ;
-(void)dealloc;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)stopQuery;
-(NSPredicate *)predicate;
-(id)initWithAssetType:(id)arg1 ;
-(void)setQueriesLocalAssetInformationOnly:(char)arg1 ;
-(id)runQueryAndReturnError:(id*)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(double)networkTimeout;
-(void)startQuery:(/*^block*/id)arg1 ;
-(void)setNetworkTimeout:(double)arg1 ;
-(NSString *)assetType;
-(void)setAssetType:(NSString *)arg1 ;
-(char)queriesLocalAssetInformationOnly;
@end

