/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRCloudAvailabilityProtobuf, NSString;

@interface NMRCloudAvailabilityMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRCloudAvailabilityProtobuf* _protobuf;

}

@property (assign,nonatomic) char hasProperNetworkConditionsToPlayMedia; 
@property (assign,nonatomic) char canShowCloudMusic; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)canShowCloudMusic;
-(char)hasProperNetworkConditionsToPlayMedia;
-(id)init;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(void)setHasProperNetworkConditionsToPlayMedia:(char)arg1 ;
-(void)setCanShowCloudMusic:(char)arg1 ;
@end

