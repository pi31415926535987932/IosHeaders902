/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <searchd/SDSearchToken.h>

@class SPDefaultSearchDatastore, NSString, NSDictionary;

@interface SPDefaultSearchToken : NSObject <SDSearchToken> {

	SPDefaultSearchDatastore* _store;

}

@property (readonly) SPDefaultSearchDatastore * store;                   //@synthesize store=_store - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * category_stats; 
-(id)initWithStore:(id)arg1 ;
-(SPDefaultSearchDatastore *)store;
-(void)cancel;
@end

