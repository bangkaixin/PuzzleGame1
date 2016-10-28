//
//  Algorithm.h
//  PuzzleGame
//
//  Created by JiongXing on 2016/10/24.
//  Copyright © 2016年 JiongXing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GameStauts.h"

@interface Algorithm : NSObject

/// BFS广度优先搜索。返回搜索路径path，path为nil则无解
+ (NSMutableArray<GameStauts *> *)breadthFirstSearchWithStartStatus:(GameStauts *)startStatus targetStatus:(GameStauts *)targetStatus;

/// DBFS双向广搜
+ (NSMutableArray<GameStauts *> *)doubleBreadthFirstSearchWithStartStatus:(GameStauts *)startStatus targetStatus:(GameStauts *)targetStatus;

/// A*启发式搜索
- (NSMutableArray<GameStauts *> *)aStarSearch;

@end