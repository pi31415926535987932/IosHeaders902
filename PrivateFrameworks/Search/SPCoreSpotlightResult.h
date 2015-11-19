/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPSearchResult.h>

@class NSString, NSDate;

@interface SPCoreSpotlightResult : SPSearchResult {

	NSString* _relatedUniqueIdentifier;
	NSString* _itemIdentifier;
	NSDate* _lastUsedDate;
	NSDate* _interestingDate;
	NSString* _domainIdentifier;
	int _incomingCount;
	int _outgoingCount;
	unsigned long long _buddyScore;

}

@property (retain) NSString * relatedUniqueIdentifier;              //@synthesize relatedUniqueIdentifier=_relatedUniqueIdentifier - In the implementation block
@property (assign) unsigned long long buddyScore;                   //@synthesize buddyScore=_buddyScore - In the implementation block
@property (retain) NSString * itemIdentifier;                       //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (retain) NSDate * lastUsedDate;                           //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (retain) NSDate * interestingDate;                        //@synthesize interestingDate=_interestingDate - In the implementation block
@property (retain) NSString * domainIdentifier;                     //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (assign) int incomingCount;                               //@synthesize incomingCount=_incomingCount - In the implementation block
@property (assign) int outgoingCount;                               //@synthesize outgoingCount=_outgoingCount - In the implementation block
-(unsigned long long)buddyScore;
-(void)setBuddyScore:(unsigned long long)arg1 ;
-(NSDate *)interestingDate;
-(void)setInterestingDate:(NSDate *)arg1 ;
-(int)incomingCount;
-(void)setIncomingCount:(int)arg1 ;
-(int)outgoingCount;
-(void)setOutgoingCount:(int)arg1 ;
-(void)setRelatedUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)relatedUniqueIdentifier;
-(void)setLastUsedDate:(NSDate *)arg1 ;
-(NSDate *)lastUsedDate;
-(NSString *)domainIdentifier;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
@end
