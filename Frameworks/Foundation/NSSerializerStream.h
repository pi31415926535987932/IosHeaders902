/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:57 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSSerializerStream
@required
-(void)copySerializationInto:(void*)arg1;
-(unsigned)writeInt:(unsigned)arg1;
-(unsigned)writeAlignedDataSize:(unsigned)arg1;
-(unsigned)writeData:(const void*)arg1 length:(unsigned)arg2;
-(unsigned)writeRoomForInt:(int*)arg1;
-(void)writeDelayedInt:(unsigned)arg1 for:(int)arg2;

@end

