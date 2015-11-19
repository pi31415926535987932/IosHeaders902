/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <libobjc.A.dylib/PASerializable.h>

@class NSUUID, NSString;

@interface PAStackshotImageInfo : NSObject <PASerializable> {

	unsigned long long _loadAddress;
	NSUUID* _imageUUID;
	NSString* _path;

}

@property (readonly) unsigned long long loadAddress;                //@synthesize loadAddress=_loadAddress - In the implementation block
@property (readonly) NSUUID * imageUUID;                            //@synthesize imageUUID=_imageUUID - In the implementation block
@property (readonly) NSString * path;                               //@synthesize path=_path - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(NSString *)path;
-(id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andPath:(id)arg3 ;
-(unsigned long long)loadAddress;
-(NSUUID *)imageUUID;
-(id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 ;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithSerializedImageInfo:(const SCD_Struct_PA5*)arg1 ;
-(id)initWithImageInfo:(void*)arg1 is64Bit:(char)arg2 ;
@end

