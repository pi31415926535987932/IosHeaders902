/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CommunicationFilterItem;

@interface CommunicationFilterItemCache : NSObject {

	CommunicationFilterItem* _filterItem;
	long long _isInList;

}

@property (assign,nonatomic) long long isInList;              //@synthesize isInList=_isInList - In the implementation block
-(void)dealloc;
-(id)initWithFilterItem:(id)arg1 isInList:(long long)arg2 ;
-(char)matchesItem:(id)arg1 ;
-(long long)isInList;
-(void)setIsInList:(long long)arg1 ;
@end

