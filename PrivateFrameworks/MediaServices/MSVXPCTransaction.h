/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface MSVXPCTransaction : NSObject {

	NSUUID* _identifier;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (getter=isActive,nonatomic,readonly) char active; 
+(id)activeTransactions;
-(void)endTransaction;
-(id)_identifier;
-(void)dealloc;
-(id)description;
-(char)isActive;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)endTransactionOnDate:(id)arg1 ;
-(void)beginTransaction;
@end

