/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <searchd/SDModernSearchDatastore.h>

@class _DECConsumer, NSString, NSDictionary;

@interface SPDefaultSearchDatastore : NSObject <SDModernSearchDatastore> {

	_DECConsumer* _consumer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * category_stats; 
-(void)addPersonResults:(id)arg1 toSection:(id)arg2 ;
-(void)addApplicationDeeplinkResults:(id)arg1 toSection:(id)arg2 ;
-(void)addApplicationResults:(id)arg1 toSection:(id)arg2 ;
-(id)searchDomains;
-(void)dealloc;
-(id)init;
-(void)deactivate;
-(void)activate;
-(id)performQuery:(id)arg1 ;
-(void)sendFeedback:(id)arg1 ;
-(id)displayIdentifierForDomain:(unsigned)arg1 ;
-(char)offersDefaultSearch;
-(char)onlyDefaultSearch;
@end

