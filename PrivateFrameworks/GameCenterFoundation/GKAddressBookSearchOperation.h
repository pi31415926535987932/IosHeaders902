/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABSearchOperation.h>
#import <libobjc.A.dylib/ABSearchOperationDelegate.h>

@class NSMutableArray, NSString;

@interface GKAddressBookSearchOperation : ABSearchOperation <ABSearchOperationDelegate> {

	NSMutableArray* _matches;
	/*^block*/id _handler;

}

@property (nonatomic,retain) NSMutableArray * matches;              //@synthesize matches=_matches - In the implementation block
@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(char)arg3 ;
-(void)dealloc;
-(id)init;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSMutableArray *)matches;
-(void)setMatches:(NSMutableArray *)arg1 ;
@end

