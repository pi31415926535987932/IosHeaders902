/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SPProtoSockPuppetPlist : PBCodable <NSCopying> {

	NSMutableArray* _objects;

}

@property (nonatomic,retain) NSMutableArray * objects;              //@synthesize objects=_objects - In the implementation block
-(NSMutableArray *)objects;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)addObject:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)objectsCount;
-(void)clearObjects;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
@end

