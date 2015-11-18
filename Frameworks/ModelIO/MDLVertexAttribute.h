/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:35:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MDLVertexAttribute : NSObject <NSCopying> {

	NSString* _name;
	unsigned _offset;
	unsigned _bufferIndex;
	unsigned _format;
	 _initializationValue;

}

@property (nonatomic,copy) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned format;                   //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned offset;                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned bufferIndex;              //@synthesize bufferIndex=_bufferIndex - In the implementation block
@property (assign,nonatomic)  initializationValue;              //@synthesize initializationValue=_initializationValue - In the implementation block
-(id)initWithName:(id)arg1 format:(unsigned)arg2 offset:(unsigned)arg3 bufferIndex:(unsigned)arg4 ;
-()initializationValue;
-(void)setInitializationValue:;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
-(void)setBufferIndex:(unsigned)arg1 ;
-(unsigned)bufferIndex;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
@end

