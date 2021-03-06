/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <NSCopying> {

	NSMutableArray* _xattrs;

}

@property (nonatomic,retain) NSMutableArray * xattrs;              //@synthesize xattrs=_xattrs - In the implementation block
+(char)loadXattrsFromFD:(int)arg1 structuralBlob:(id*)arg2 contentBlob:(id*)arg3 withMaximumSize:(unsigned)arg4 error:(id*)arg5 ;
+(char)removeXattrsOnFD:(int)arg1 includingContentRelated:(char)arg2 error:(id*)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)applyToFileDescriptor:(int)arg1 error:(id*)arg2 ;
-(void)addXattrs:(id)arg1 ;
-(unsigned)xattrsCount;
-(void)clearXattrs;
-(id)xattrsAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)xattrs;
-(void)setXattrs:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

