/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSArray;

@interface CRSearchQuery : NSObject <NSSecureCoding> {

	NSPredicate* _predicate;
	NSArray* _domains;
	unsigned _implicitGroupThreshold;
	unsigned _options;
	/*^block*/id _weightDecayer;
	/*^block*/id _comparator;

}

@property (nonatomic,retain) NSPredicate * predicate;                      //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * domains;                              //@synthesize domains=_domains - In the implementation block
@property (assign,nonatomic) unsigned implicitGroupThreshold;              //@synthesize implicitGroupThreshold=_implicitGroupThreshold - In the implementation block
@property (assign,nonatomic) unsigned options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id weightDecayer;                               //@synthesize weightDecayer=_weightDecayer - In the implementation block
@property (nonatomic,copy) id comparator;                                  //@synthesize comparator=_comparator - In the implementation block
+(/*^block*/id)frecencyComparator;
+(/*^block*/id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned)arg4 ;
+(char)supportsSecureCoding;
+(id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4 ;
+(/*^block*/id)rankedFrecencyComparatorWithPreferredSources:(id)arg1 ;
-(id)comparator;
-(void)setImplicitGroupThreshold:(unsigned)arg1 ;
-(void)setDomains:(NSArray *)arg1 ;
-(void)setComparator:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(unsigned)implicitGroupThreshold;
-(id)weightDecayer;
-(void)setWeightDecayer:(id)arg1 ;
-(NSArray *)domains;
@end

