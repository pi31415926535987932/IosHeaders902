/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:46:59 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLBuffer;
@interface SCNMTLBuffer : NSObject {

	int _usedCount;
	id<MTLBuffer> _buffer;
	int _offset;
	id _dataSource;

}

@property (assign) int usedCount;                               //@synthesize usedCount=_usedCount - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) int offset;                        //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) void* contents; 
@property (assign,nonatomic) id dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
-(int)usedCount;
-(void)setUsedCount:(int)arg1 ;
-(void)incrementUsedCount;
-(int)decrementUsedCount;
-(void)setDataSource:(id)arg1 ;
-(void)dealloc;
-(id)dataSource;
-(void*)contents;
-(void)setOffset:(int)arg1 ;
-(int)offset;
-(void)setBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)buffer;
@end
