/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface CMKCaptureRequest : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* __parameterStorage;
	int _type;

}

@property (nonatomic,readonly) int type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * _customParameterStorage; 
@property (nonatomic,readonly) NSMutableDictionary * _parameterStorage;                  //@synthesize _parameterStorage=__parameterStorage - In the implementation block
-(id)init;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(int)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)_parameterStorage;
-(id)parameterForKey:(id)arg1 ;
-(NSDictionary *)_customParameterStorage;
@end

