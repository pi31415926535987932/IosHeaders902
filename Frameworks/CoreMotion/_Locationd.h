/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:13:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLIntersiloServiceProtocol.h>

@class NSString;

@interface _Locationd : NSObject <CLIntersiloServiceProtocol> {

	char _valid;

}

@property (assign,nonatomic) char valid;                            //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)becameFatallyBlocked:(id)arg1 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(char)isSupported;
-(char)valid;
-(void)setValid:(char)arg1 ;
@end

