/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IDSServiceMonitor : NSObject {

	int _availability;
	NSString* _service;
	int _token;

}

@property (nonatomic,retain,readonly) NSString * service; 
-(void)_updateAvailability;
-(void)dealloc;
-(NSString *)service;
-(id)initWithService:(id)arg1 ;
-(int)serviceAvailability;
-(void)updateAvailability;
-(void)_postAvailability:(int)arg1 ;
-(void)handleActiveAccountsChanged:(id)arg1 ;
@end

