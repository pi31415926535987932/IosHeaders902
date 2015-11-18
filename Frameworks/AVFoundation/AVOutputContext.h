/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVOutputContextInternal, NSString;

@interface AVOutputContext : NSObject <NSSecureCoding> {

	AVOutputContextInternal* _outputContext;

}

@property (nonatomic,readonly) NSString * deviceName; 
+(id)outputContext;
+(OpaqueFigEndpointPickerRef)copySystemVideoPicker;
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
+(void)resetOutputDeviceForAllOutputContexts;
+(char)outputContextExistsWithRemoteOutputDevice;
+(char)supportsSecureCoding;
-(id)_weakReference;
-(id)initWithContextUUID:(id)arg1 ;
-(id)contextUUID;
-(void)_removeFigEndpointPickerNotifications;
-(void)_addFigEndpointPickerNotifications;
-(void)_handlePickerServerConnectionDiedNotification;
-(id)initWithFeature:(unsigned)arg1 options:(id)arg2 ;
-(long)_configureFigEndpointPickerWithFeature:(unsigned)arg1 options:(id)arg2 ;
-(id)outputDevice;
-(int)applicationProcessID;
-(void)setApplicationProcessID:(int)arg1 ;
-(char)setOutputDevice:(id)arg1 forFeatures:(unsigned)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)deviceName;
-(void)finalize;
@end

